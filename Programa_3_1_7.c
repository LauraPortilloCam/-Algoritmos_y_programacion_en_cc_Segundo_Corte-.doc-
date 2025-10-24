// Programa 7.3.1.c
//Laura Portillo
//
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
int main ()
{
 int num;
 printf("ingrese un numero: \n");
 scanf("%d", &num);
 if (num%2 == 0)// con el if definimos la accion que se deje ejecutar en este caso el numero debe ser par y por eso ponemos que el numero debe ser divisible por dos y si se cumple el programa considerara que es par 
  printf("el numero %d es par. \n", num);
 else // el else nos dira si el numero es impara si no cumple con nuestrea condicion de ser divisible por dos 
  printf("El numero %d es impar. \n", num);
return 0;
}

