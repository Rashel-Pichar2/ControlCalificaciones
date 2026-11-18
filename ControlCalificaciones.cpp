#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Variable para controlar si se desea repetir todo el proceso con otro grupo ('s' o 'n')
    char repetirPrograma = 's';

    // Bucle principal del programa: se repite mientras el usuario responda 's' o 'S'
    while (repetirPrograma == 's' || repetirPrograma == 'S') {

        int cantidadEstudiantes = 0;

        // Bucle de validación: la cantidad de estudiantes debe ser mayor a 0
        while (cantidadEstudiantes <= 0) {
            cout << "Cantidad de estudiantes: ";
            cin >> cantidadEstudiantes;
            if (cantidadEstudiantes <= 0) {
                cout << "Error: La cantidad de estudiantes debe ser mayor a 0. Intente de nuevo.\n";
            }
        }

        // Contadores y acumuladores para el resumen del grupo
        int aprobados = 0;
        int reprobados = 0;
        double sumaPromediosGrupo = 0;

        // Variables para encontrar el mejor promedio del grupo
        string nombreMejorEstudiante = "";
        double mejorPromedio = -1.0; // Se inicializa en un valor bajo para que el primer promedio lo reemplace

        // Bucle para recorrer a cada estudiante del grupo
        for (int i = 1; i <= cantidadEstudiantes; i++) {
            cout << "\nEstudiante " << i << endl;

            string nombreEstudiante;
            cout << "Nombre: ";
            cin >> nombreEstudiante;

            double sumaCalificaciones = 0;

            // Bucle para solicitar y validar las 4 calificaciones de cada estudiante
            for (int j = 1; j <= 4; j++) {
                double calificacion = -1;
                while (calificacion < 0 || calificacion > 100) {
                    cout << "Calificacion " << j << ": ";
                    cin >> calificacion;
                    if (calificacion < 0 || calificacion > 100) {
                        cout << "Error: La calificacion debe estar entre 0 y 100. Intente de nuevo.\n";
                    }
                }
                // Acumulamos las calificaciones del estudiante actual
                sumaCalificaciones += calificacion;
            }

            // Calculamos el promedio del estudiante actual
            double promedioEstudiante = sumaCalificaciones / 4.0;

            // Mostramos el resultado individual del estudiante con dos decimales
            cout << fixed << setprecision(2);
            cout << "Promedio: " << promedioEstudiante;

            if (promedioEstudiante >= 70) {
                cout << " - Aprobado" << endl;
                aprobados++; // Incrementamos el contador de aprobados
            }
            else {
                cout << " - Reprobado" << endl;
                reprobados++; // Incrementamos el contador de reprobados
            }

            // Acumulamos el promedio para el cálculo del promedio general del grupo
            sumaPromediosGrupo += promedioEstudiante;

            // Evaluamos si este estudiante tiene el promedio más alto del grupo
            if (promedioEstudiante > mejorPromedio) {
                mejorPromedio = promedioEstudiante;
                nombreMejorEstudiante = nombreEstudiante;
            }
        }

        // Calculamos el promedio general del grupo
        double promedioGeneralGrupo = sumaPromediosGrupo / cantidadEstudiantes;

        // Mostramos el resumen final exigido por el caso práctico
        cout << "\n===== RESUMEN =====" << endl;
        cout << "Aprobados: " << aprobados << " | Reprobados: " << reprobados << endl;
        cout << "Promedio del grupo: " << promedioGeneralGrupo << endl;
        cout << "Mejor promedio: " << nombreMejorEstudiante << " (" << mejorPromedio << ")" << endl;

        // Preguntamos si desea procesar otro grupo
        cout << "¿Desea procesar otro grupo? (s/n): ";
        cin >> repetirPrograma;
    }

    return 0;
}