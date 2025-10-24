//Programa 7.1.c
//Laura Sofia Portillo Camargo
//24 de Octubre del 2025
//Estructuras de seleccion 
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>

int main()
{
 int a, b;

 printf("Ingresa un valor a:");// es el texto que aparece en pantalla 
 scanf(" %d", &a);// aqui podemos pedir al usuario que nos de un nombre
 printf("El valor ingresado es: %d\n", a);

 printf("Ingresa un valor b:");
 scanf("%d",&b);
 printf("El valor ingresado es: %d\n", b);

 if (a>b);// definimos nuestra condición
 {
 printf("\t El Valor a=(%d) es mayor que el valor b=(%d). \n ", a, b);
 }
 printf("\a\t El programa sigue su curso. \n");
 return 0;

}
