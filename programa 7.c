#include <stdio.h>
int main()
{

    /* Andrea Hernandez 
    Equipo Zener 
    28 Abr 21
    Programa 7: Calcular el indice de masa corporal 
    */

    float peso, altura, quinto;
    printf ("\n\n Programa 7");
    printf ("\n\n Calcula el indice de masa corporal");
    printf ("\n\n Dame el peso");
    scanf ("%f", &peso);  //Permite capturar el valor real y lo guarda en variable 
    printf ("\n\n Dame la altura");
    scanf ("%f", &altura);  //Permite capturar el valor real y lo guarda en variable 
    quinto = (peso/altura);
    printf ("\n La masa muscular es %f", qinto);

    return 0;
    
}