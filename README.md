# Sistema de Control de Calificaciones - La Nueva Escuela

**Estudiante:** Rashel Polanco  
**Matrícula:** 2023-3363  
**Asignatura:** Lógica de Programación  
**Profesor:** Gamalier Reyes del Carmen  

## Descripción del Programa
Aplicación de consola desarrollada en C++ para automatizar el registro y control de notas de un grupo de estudiantes en el centro educativo "La Nueva Escuela". El programa permite ingresar calificaciones, valida que los datos estén dentro de los rangos correctos, calcula los promedios individuales y genera un resumen estadístico final del grupo.

## Datos de Entrada, Proceso y Salida

* **Datos de entrada:**
  * Cantidad total de estudiantes del grupo (número entero mayor que 0).
  * Nombre completo de cada estudiante.
  * Cuatro calificaciones por estudiante (valores numéricos entre 0 y 100).
  * Respuesta de confirmación (`s` o `n`) para evaluar otro grupo al finalizar.

* **Proceso:**
  * Validación mediante bucles para evitar cantidades de estudiantes negativas o nulas, así como notas fuera del rango de 0 a 100.
  * Cálculo del promedio individual sumando las cuatro notas y dividiendo entre 4.
  * Evaluación de aprobación (promedio mayor o igual a 70) o reprobación (menor a 70).
  * Conteo acumulado de aprobados, reprobados, promedio general del grupo e identificación del promedio más alto.

* **Salida:**
  * Resumen individual por alumno con sus notas, promedio con dos decimales y estado (Aprobado / Reprobado).
  * Reporte final del grupo con el total de aprobados, reprobados, promedio general y el nombre del estudiante con la nota más alta.

## Explicación de los Bucles Utilizados
En este proyecto se utilizaron estructuras repetitivas **`while`** para cumplir con la lógica y las restricciones de la asignatura:

* **Bucle `while` principal (Repetición del programa):** Mantiene el sistema en ejecución mientras el usuario ingrese `s` al preguntarle si desea procesar otro grupo, permitiendo reiniciar todo el proceso sin cerrar la consola.
* **Bucle `while` de validación de estudiantes:** Verifica al inicio que la cantidad de estudiantes sea mayor a 0. Si el usuario escribe 0 o un número negativo, el ciclo vuelve a pedir el dato hasta recibir un valor válido.
* **Bucle `while` para recorrer y validar calificaciones:** Controla el ingreso de las 4 notas de cada estudiante y comprueba que cada una esté entre 0 y 100. Si se digita una nota inválida, el bucle solicita nuevamente esa misma calificación sin perder el progreso anterior.

## Capturas de Pantalla de la Ejecución

![Ejecución del programa - Registro](Captura%20de%20pantalla%202026-11-18%20001557.png)

![Ejecución del programa - Resumen final](Captura%20de%20pantalla%202026-11-18%20002253.png)
