/*
* Mostrar Tabla de Temperaturas de Fahrenheit a Celsius
* Fabiana Maria Anahi Ramirez
* 26/04/2015
*/

#include <stdio.h>

float getCelsius(float fahr);

int main(void){
    const int MIN=0;
    const int MAX=300;
    const int INC=20;
    float fahr;

    printf("%5s %8s\n","Fahrenheit","Celsius");
    for(fahr=MIN; fahr<=MAX; fahr=fahr+INC)
       printf("%5.0f %12.1f\n",fahr,getCelsius(fahr));
}

float getCelsius(float fahr){
    return 5.0*(fahr-32)/9.0;
}
