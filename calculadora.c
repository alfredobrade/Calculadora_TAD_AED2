/* En este ejercicio se decidió agregar un nuevo módulo de cálculo de figuras
geométricas a la calculadora ofrecida como ejemplo por la catedra. 
Se accederá al módulo de cálculo de éstas a traves de la opcion 5 del menú 
de la calculadora  */
#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"
#include "AreasfigurasGeometricas.h"

// declaracion de prototipos
void ingresonros();
void ingresarUnNumero();
void menu();
void menuFiguras();

// declaracion de variables globales
float n1,n2;
int opcion,rta;

// funcion principal
int main(){
	do {
	//ingresonros();
	menu();
	fflush(stdin);
	printf("\nDesea realizar otra operacion? \n1.SI\n2.NO\n");
	scanf("%d",&rta);
	fflush(stdin);
	}
	while(rta==1);
	
	return 0;
}
//implementacion de funciones
void ingresonros(){
	printf("Ingrese 2 numeros: \n");
	scanf("%f %f",&n1,&n2);
}

void ingresarUnNumero(){
	printf("Ingrese un numero: \n");
	scanf("%f ", &n1);
}

void menu(){
	printf("\nIngrese operacion:\n");
	printf("1.SUMAR.\n2.RESTAR.\n3.MULTIPLICAR.\n4.DIVIDIR.\n5.CALCULAR AREAS\n");
	scanf("%d",&opcion);
	if(opcion<6){
		switch(opcion){
			case 1:{
				system("cls");
				ingresonros();
				printf("\n%.2f + %.2f = %.2f\n",n1,n2,suma(n1,n2));
				break;
			}
			case 2:{
				system("cls");
				ingresonros();
				printf("\n%.2f - %.2f = %.2f\n",n1,n2,resta(n1,n2));
				break;
			}
			case 3:{
				system("cls");
				ingresonros();
				printf("\n%.2f * %.2f = %.2f\n",n1,n2,multiplicacion(n1,n2));
				break;
			}
			case 4:{
				system("cls");
				ingresonros();
				if(n2==0){
					division(n1,n2);
				} else{
					printf("\n%.2f / %.2f = %.2f\n",n1,n2,division(n1,n2));
				}
				break;
			
			}
			case 5:{
				/* al ingresar la opcion de calculo de figuras se abre un sub menu para elegir la figura */
				menuFiguras();
				break;
			}
		}
	}
	else
		printf("\nERROR.\n");
}
void menuFiguras(){
	printf("\nIngrese FIGURA:\n");
	printf("1.TRIANGULO.\n2.RECTANGULO.\n3.CUADRADO.\n4.PARALELOGRAMO.\n5.CIRCULO\n");
	scanf("%d",&opcion);
	if(opcion<6){
		switch(opcion){
			case 1:{
				system("cls");
				ingresonros();				
				printf("\nArea del triangulo de base %.2f y altura %.2f = %.2f\n",n1,n2,areaTrianguloBH(n1,n2));
				break;
			}
			case 2:{
				system("cls");
				ingresonros();
				printf("\nArea del rectangulo de lado1 %.2f y lado2 %.2f = %.2f\n",n1,n2,areaRectangulo(n1,n2));
				break;
			}
			case 3:{
				system("cls");
				ingresarUnNumero();
				printf("\nArea del cuadrado de lado %.2f = %.2f\n",n1,areaCuadrado(n1));
				break;
			}
			case 4:{
				system("cls");
				ingresonros();
				printf("\nArea del paralelogramo de base %.2f y altura %.2f = %.2f\n",n1,n2,areaParalelogramo(n1,n2));
				break;
			
			}
			case 5:{
				ingresarUnNumero();
				printf("\nArea de circulo de radio %.2f  = %.2f\n",n1,areaCirculo(n1));
				break;
			}
		}
	}
	else
		printf("\nERROR.\n");
}
