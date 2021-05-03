#include <stdio.h>
int main()
{

    /* Andrea Hernandez 
    Equipo Zener 
    28 Abr 21
    Programa 8: Calcular la tasa de rentabilidad inicial que ontendrias al comprar una empresa
    */

   float Beneficiosanualesneto, Precio, Rentabilidad;
   
   printf ("\n\n programa 8");
   printf ("\n\n calcula la tasa de rentabilidad inicial");
   printf ("\n\n cuales son los beneficios anuales netos de la mepresa");
   scanf ("%f", &Beneficiosanualesneto);  //permite capturar un valor real y lo guarda en una variable//
   printf ("\n\n cual es el precio de venta");
   scanf ("%f"; &Precio);  //permite capturar un valor real y lo guarda en una variable//

   Rentabilidad = (Beneficiosanualesneto/Precio);
   printf ("\n la tasa de rentabilidad que ontendras sera de %f", Rentabilidad);

   return 0;

}
