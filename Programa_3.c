puntoFlontanteNumero2
//Programa_3.c
//Laura Sofia Portillo Camargo
//17_Octubre_2025
//Asisgnación de variables a tipos de datos
//---------------------------------------------------------------------------------------->

#include <stdio.h>//Librerias
int main() {   //
short   enteroNumero1 = 17;  //El comando Short nos indica el numero entero 
signed int enteroNumero2 = -55;// El comando singned int represneta dos comandos el int co>
unsigned long enteroNumero3 = 145;//El comnado tambien es compuesto por dos comandos que s>
char caracterA = 65;//CHar se define las caracteristiacas que le quiero dar a la variable
char caracterB = 'B';//

float puntoFlotanteNumero1 = 89.7;

double  puntoFlotanteNumero2 = 1289.470389;
//Funciones de salidas de datos en pantalla
printf("Las variable entero1 tiene un valor: %i \n", enteroNumero1);
printf("La varible entero2 con signo tiene un valor: %d \n", enteroNumero2);
printf("La variable entero3 sin signo tiene un valor: %lu \n,", enteroNumero3);
printf("La variable caracter1 tiene un valor: %c \n", caracterA);
printf("La variable caracter2 tiene un valor: %c \n", caracterB);
printf("La variable flotante tiene un valor: %f \n", puntoFlotanteNumero1);
printf("La variable double tiene un valor: %f \n", puntoFlotanteNumero2);
return 0;

}
