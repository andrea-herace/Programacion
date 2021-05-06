#include <stdio.h>
int main()
{

    /*Andrea Hernandez 
    Equipo Zener 
    03 May 21
    Programa 10: Calcular el peso total con IVA
    */

   float precio, IVA, total;
   printf ("precio");
   scanf ("%f", &precio);
   printf ("ingresa el IVA");
   scanf ("%f", &IVA);
   total =precio + precio * (IVA/100);

   printf ("el precio final con IVA es: %.2f\n" , total);

}