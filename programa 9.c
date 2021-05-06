#include <stdio.h>
int main()
{

    /*Andrea Hernandez 
    Equipo Zener 
    03 May 21
    Programa 9: Calcular promedio de una materia
    */

   float cal1, cal2, cal3, prom;

   printf ("\n\n Programa 9");
   printf ("\n\n Calcular promedio de una materia");
   printf ("\n\n Dame tu primer calificacion");
   scanf (%f, &cal1);
   printf ("\n\n Dame tu segunda calificacion");
   scanf (%f, &cal2);
   printf ("\n\n Dame tu tercer calificacion");
   scanf (%f, &cal3);

   prom = (cal1 + cal2 + cal3)/3;

   printf ("tu promedio es: %.2f\n", prom);
   printf ("gracias por tu visita");

   return 0;

}