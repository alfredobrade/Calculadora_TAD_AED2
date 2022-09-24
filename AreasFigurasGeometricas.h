/*
Calculador de �rea de figuras geom�tricas
*/

#include <stdio.h>
#include <stdbool.h>
#include <String.h>
#include <stdlib.h>
#define PI 3.141516

// declaracion de tipos de datos personalizados
// ----- DOCUMENTACION EN LAS IMPELMENTACIONES-------
float areaTrianguloBH(float,float);
float areaRectangulo(float,float);
float areaCuadrado(float);
float areaParalelogramo(float,float);
float areaCirculo(float);

// implementacion de funciones

/* recibe como par�metro la base y altura del triangulo y devuelve el �rea
 de no tener la altura, hallarla por medios trigonom�tricos*/
float areaTrianguloBH(float base,float altura){
	return ((base*altura)/2);
}
/* se pasan como par�metro los lados del rectangulo y devuelve el �rea*/
float areaRectangulo(float lado1,float lado2){
	return (lado1*lado2);
}
/* se pasa como par�metro el lado del cuadrado y devuelve el �rea (solo si los 4 lados iguales!!!)*/
float areaCuadrado(float lado){
	return (lado*lado);
}
/* se pasa como parametro un lado y la altura (distancia entre el lado pasado
 como par�metro y su lado paralelo) y devuelve el �rea*/
float areaParalelogramo(float base,float altura){
	return (base*altura);
}
/* se pasa el radio del circulo y devuelve el �rea*/
float areaCirculo(float radio){
	return (PI*radio*radio);
}

