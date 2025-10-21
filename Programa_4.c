//Programa_4.c
//Laura Sofia Portillo Camargo
//21_Oct_2025
//Uso de secuencias de caracteres
//------------------------------------------------------------------------------

#include <stdio.h>
int main()
{
int entero;
float flotante;

printf("Ingresa el valor entero:");
scanf("%i\0", &entero);
printf("El valor ingresado es: %i\0", entero);

printf("Ingresa el valor flotante:");
scanf("%f\0", &flotante);
printf("El valor ingresado es: %f\0", flotante);

return 0;
}


//Al hacer uso del caracter \a en el momento de escribir los numeros y darle enter hace un sonido 
//AL hacer uso de este \b nos pide el primer nuemro pero no nos da el resultado y en el segundo si nos lo da 
//El caracter \f hace que al momento de dar el primer valor podamos dar espacio entre lienas, hasta poner otro valor y que nos de el resultado.
//El caracter \n nos permite dejar especio entre lineas y lo que se muestra 
//El Caracter \r nos muestra sololos valores que podemos ingresar 
//Este Caracter \t nos permite mostar los resultados de forma  horitontal o en la misma linea
//Este caracter \v deja ver los  resultados de forma desendente 
//Este caracter \0 al momento de recopilar nos da  una davertencia de valñor nulo 
