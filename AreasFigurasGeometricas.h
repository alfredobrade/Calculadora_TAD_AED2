/*
Calculador de área de figuras geométricas
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

/* recibe como parámetro la base y altura del triangulo y devuelve el área
 de no tener la altura, hallarla por medios trigonométricos*/
float areaTrianguloBH(float base,float altura){
	return ((base*altura)/2);
}
/* se pasan como parámetro los lados del rectangulo y devuelve el área*/
float areaRectangulo(float lado1,float lado2){
	return (lado1*lado2);
}
/* se pasa como parámetro el lado del cuadrado y devuelve el área (solo si los 4 lados iguales!!!)*/
float areaCuadrado(float lado){
	return (lado*lado);
}
/* se pasa como parametro un lado y la altura (distancia entre el lado pasado
 como parámetro y su lado paralelo) y devuelve el área*/
float areaParalelogramo(float base,float altura){
	return (base*altura);
}
/* se pasa el radio del circulo y devuelve el área*/
float areaCirculo(float radio){
	return (PI*radio*radio);
}

