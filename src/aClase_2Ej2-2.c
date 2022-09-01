/*
 ============================================================================
 Name        : aClase_2Ej2-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 2-2:
  Ingresar 10 números enteros, distintos de cero. Mostrar:
  Cantidad de pares e impares.
  El menor número ingresado.
  De los pares el mayor número ingresado.
  Suma de los positivos.
  Producto de los negativos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout,NULL);

	int numero;
	int contImpar=0;
	int contPar=0;
	int acumP=0;
	int acumN=1;
	int menorNumero;
	int mayorNumPar;
	int i;
	int flag=TRUE;

	for(i=0;i<5;i++){
		printf(" Ingresa un numero: ");
		scanf("%d",&numero);

		if(numero>0){
			acumP+=numero;
		}else if(numero<0){
			acumN*=numero;
		}

		if(numero%2==0){ //par
			contPar++;
		}else{           //impar
			contImpar++;
		}

		if(i==0 || numero>mayorNumPar){
			mayorNumPar=numero;
		}

		if(flag==FALSE||numero<menorNumero){
			menorNumero=numero;
			flag=TRUE;
		}
	}

	printf("\n A) Numeros pares: %d",contPar);
	printf("\n B) Numeros impares: %d",contImpar);
	printf("\n C) Numeros menor: %d",menorNumero);
	printf("\n D) Numeros Par mayor: %d",mayorNumPar);
	printf("\n E) Suma de los positivos: %d",acumP);
	printf("\n F) Producto de los negativos: %d",acumN);


	return EXIT_SUCCESS;
}
