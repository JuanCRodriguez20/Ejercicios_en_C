/*******************************************************
* Fecha 02 - Agosto - 2022
* Autor: Juan Camilo Rodriguez Fonseca
* Materia: Paralleland Distributed Computing
* Tema: Taller C 01
* Objetivo: Compilación por separado
*******************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int opcion;

/* Se implementan las funciones */

/* Se implementa un menú para que seleccione la solución al punto que desee ver. */
void bienvenida(){	
	printf("#################################################\n");
	printf("#                   BIENVENIDO                  #\n");
	printf("#-----------------------------------------------#\n");
	printf("#      SOLUCIÓN A LOS 10 PUNTOS PROPUESTOS      #\n");
	printf("# 1. Producto de 2 números.                     #\n");
	printf("# 2. Días a años, semanas y días.               #\n");
	printf("# 3. Distancia entre 2 puntos.                  #\n");
	printf("# 4. Ver primeros 10 numeros naturales.         #\n");
	printf("# 5. Triangulo rectangulo de asteriscos.        #\n");
	printf("# 6. Matriz NxN de unos '1'.                    #\n");
	printf("# 7. Matriz NxN de números aleatorios.          #\n");
	printf("# 8. Suma de matrices NxN.                      #\n");
	printf("# 9. Resta de matrices NxN.                     #\n");
	printf("# 10. Multiplicación de matrices NxN            #\n");
	printf("# 0. Salir                                     #\n");
	printf("#################################################\n");
	printf("\nSeleccione la opción de su preferencia para ver la solución: ");
	scanf("%i",&opcion);	
}

/* 
* Escribe un programa en C que acepte dos enteros del usuario y calcule el producto de 
* los dos enteros.
*/
void producto(){
	int num1, num2, resultado;
	
	// Se procede a pedir el primer entero
	printf("\nIntroduzca el primer entero: ");
	scanf("%i", &num1);
	
	// Se procede a pedir el segundo entero
	printf("\nIntroduzca el segundo entero: ");
	scanf("%i", &num2);
	
	
	// Se procede a realizar el calculo del producto
	resultado = num1*num2;
	printf("Producto de los dos enteros anteriores =  %i\n\n", resultado);
}

/*
* Escribe un programa en C para convertir los días especificados en años, semanas y días.
* Nota: Ignore el año bisiesto.
*/
void dias(){
	int dias=0, años=0, semanas=0;
	printf("Número de días:");
	scanf("%i",&dias);
	
	if(dias>=365){
		años = dias/365;
	}
	if(años>0){
		dias -= años*365;
	}
	if(dias>=7){
		semanas = dias/7;
	}
	if(semanas>0){
		dias -= semanas*7;
	}
	printf("Años: %i\n",años);
	printf("Semanas: %i\n",semanas);
	printf("Días: %i\n\n",dias);
}


/*
* Escribe un programa en C para calcular la distancia entre los dos puntos.
*/
void distancia(){
	int x1,x2,y1,y2;
	float distancia;
	printf("Entrada x1: ");
	scanf("%i",&x1);
	printf("Entrada y1: ");
	scanf("%i",&y1);
	printf("Entrada x2: ");
	scanf("%i",&x2);
	printf("Entrada y2: ");
	scanf("%i",&y2);
	distancia = sqrt(pow((x2-x1),2)+pow(y2-y1,2));
	printf("Distancia entre dichos puntos: %.4f \n\n",distancia);
}

/*
* Escribe un programa en C para mostrar los 10 primeros números naturales.
*/
void numeros(){
	for(int i = 1;i<=10;i++){
		printf("%i ",i);
	}
	printf("\n\n");
}

/*
* Escribe un programa en C para mostrar el patrón como triángulo rectángulo 
* usando un asterisco. La cantidad de líneas del triangulo es ingresada por 
* consola por el usuario, y el valor máximo de líneas es de 14.
*/

void triangulo(){
	int lineas=0;

	printf("Digite la cantidad de lineas que desea que tenga el triangulo, recuerde que el máximo es 14: ");
	scanf("%i",&lineas);
	
	while(lineas>14 || lineas<1){
		printf("Ese valor se encuentra fuera del limite, intentelo de nuevo por favor: ");
		scanf("%i",&lineas);
	}
	
	for(int i=1; i<=lineas;i++){
		for(int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

}

/*
* Escribe un programa que imprima una matriz de “1”, de tamaño NxN. El tamaño 
* es indicado por el usuario y debe ser siempre menor que 8.
*/
void matrizUnos(){
	int N=0;

	printf("Digite la dimensión de la matriz NxN, recuerde que el máximo es 8: ");
	scanf("%i",&N);
	
	while(N>8){
		printf("Supera el limite, intentelo de nuevo por favor: ");
		scanf("%i",&N);
	}
	
	int matriz[N][N];
	
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			matriz[i][j] = 1;
		}
	}
	
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

/* 
* Escribe un programa que imprima una matriz de números aleatorios enteros, 
* entre 0 y 9, de tamaño NxN. El tamaño es indicado por el usuario y debe 
* ser siempre menor que 8.
*/

void matrizAleatorios(){
	int N=0;

	printf("Digite la dimensión de la matriz NxN, recuerde que el máximo es 8: ");
	scanf("%i",&N);
	
	while(N>8){
		printf("Supera el limite, intentelo de nuevo por favor: ");
		scanf("%i",&N);
	}
	
	int matriz[N][N];
	
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			matriz[i][j] = rand() % 10;
		}
	}
	
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


/* 
* Escribe un programa que muestre dos matrices de números aleatorios, entre 0 
* y 9, de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre 
* menor que 8. Finalmente, se presenta la suma de las dos matrices.
*/
void sumaMatriz(){
	int N=0;

	printf("Digite la dimensión de la matriz NxN, recuerde que el máximo es 8: ");
	scanf("%i",&N);
	
	while(N>8){
		printf("Supera el limite, intentelo de nuevo por favor: ");
		scanf("%i",&N);
	}
	
	int matriz[N][N], matriz1[N][N];
	
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			matriz[i][j] = rand() % 10;
			matriz1[i][j] = rand() % 10;
		}
	}
	
	printf("Matriz 1: \n");
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz 2: \n");
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			printf("%i ",matriz1[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Resultado de la suma: \n");
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			printf("%i ",(matriz[i][j] + matriz1[i][j]));
		}
		printf("\n");
	}
	printf("\n");
}


/*
* Escribe un programa que muestre dos matrices de números aleatorios, entre 0 
* y 9, de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre 
* menor que 8. Finalmente, se presenta la resta de las dos matrices.
*/
void restaMatriz(){
	int N=0;

	printf("Digite la dimensión de la matriz NxN, recuerde que el máximo es 8: ");
	scanf("%i",&N);
	
	while(N>8){
		printf("Supera el limite, intentelo de nuevo por favor: ");
		scanf("%i",&N);
	}
	
	int matriz[N][N], matriz1[N][N];
	
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			matriz[i][j] = rand() % 10;
			matriz1[i][j] = rand() % 10;
		}
	}
	
	
	printf("Matriz 1: \n");
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz 2: \n");
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			printf("%i ",matriz1[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Resultado de la resta: \n");
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			printf("%i ",(matriz[i][j] - matriz1[i][j]));
		}
		printf("\n");
	}
	printf("\n");
}


/*
* Escribe un programa que muestre dos matrices de números aleatorios, entre 0 
* y 9, de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre 
* menor que 8. Finalmente, se presenta el producto de las dos matrices.
*/
void multiplicacionMatrices(){
	int N=0;

	printf("Digite la dimensión de la matriz NxN, recuerde que el máximo es 8: ");
	scanf("%i",&N);
	
	while(N>8){
		printf("Supera el limite, intentelo de nuevo por favor: ");
		scanf("%i",&N);
	}
	
	int matriz[N][N], matriz1[N][N], resultado[N][N];
	
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			matriz[i][j] = rand() % 10;
			matriz1[i][j] = rand() % 10;
		}
	}
	
	for(int i = 0; i<N ; i++){
		for(int j=0; j<N ; j++){
			int suma = 0;
			for(int k=0; k<N ; k++){
				suma += matriz[j][k]*matriz1[k][i];
			}
			resultado[j][i]=suma;
		}
	}
	
	printf("Matriz 1: \n");
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz 2: \n");
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			printf("%i ",matriz1[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Resultado de la multiplicación: \n");
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			printf("%i ",resultado[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void menu(){
	do{
		bienvenida();
		switch (opcion){
			case 1: 
				producto();
				break;
			case 2:
				dias();
				break;
			case 3:
				distancia();
				break;
			case 4:
				numeros();
				break;
			case 5:
				triangulo();
				break;
			case 6:
				matrizUnos();
				break;
			case 7:
				matrizAleatorios();
				break;
			case 8:
				sumaMatriz();
				break;
			case 9:
				restaMatriz();
				break;
			case 10:
				multiplicacionMatrices();
				break;
			case 0:
				printf("\nGracias por usar este programa, ¡vuelva pronto!\n");
			
		}
	}while(opcion!=0);
}

