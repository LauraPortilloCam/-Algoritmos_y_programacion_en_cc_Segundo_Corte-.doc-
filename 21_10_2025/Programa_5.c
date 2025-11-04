#include <stdio.h>
int main()
{
int enteroNumero;
char caracterA = 65; 
double puntoFlotanteNumero;

printf("Escriba un valor entero: ");
scanf("%i", &enteroNumero);
printf("Escriba un valor real: ");
scanf("%lf", &puntoFlotanteNumero);

printf("\nImprimiendo las variables \t\n");
printf("\t Valor de enteroNumero = %i\t\n", enteroNumero);
printf("\t Valor de caracterA = %c \t\n", caracterA);
printf("\t Valor de puntoFlotanteNumero = %lf \t\n",
puntoFlotanteNumero);
printf("\t Valor de enteroNumero en base 16 = %x \t\n", enteroNumero);
printf("\t Valor de caracterA en código hexadecimal = %x\n", caracterA);
printf("\t Valor de puntoFlotanteNumero\n");
printf("en notación científica = %e\n", puntoFlotanteNumero);
return 0;
}

// El Caracter \a al final de  ejecutarlo y darle los valores nos arroja un sonido, y si lo ponemos en donde va el \n pasa igual 
// El Caracter \b no veo diferencia
// El Caracter \f nos da espacio entre los resultados
// El Caracter \n este lo encontramos en todas las lineas y nos ayuda a que las respuestas que de nuestro programa tenga un esapacio, si lo quitam,os de los tres ultimos printf vemos las respueas en uns misma linea 
// El Caracter \r en este caso se ve como salta la linea  
// El Caracter \t nos muestra los datos en orizontal pero al tener el \ no se evidencia 
// El Caracter \v nos deja los valores organizados de froma vertical
// El Caracter \0 nos muestra un error al recopilar y nos deja algun as filas desorganizadas
