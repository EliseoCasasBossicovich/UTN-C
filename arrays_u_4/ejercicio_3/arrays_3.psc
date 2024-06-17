// El siguiente pseudocódigo fue realizado en PSeInt

Algoritmo ejercicio_3
	Definir num, i, resultado Como Entero;
	Dimension num[5];
	Para i <- 1 Hasta 5 Con Paso 1 Hacer
		Leer num[i]
	FinPara
	Para i <- 1 Hasta 5 Con Paso 1 Hacer
		resultado <- resultado + num[i]
	FinPara
	Escribir "La suma de los numeros es:";
	Escribir resultado;
FinAlgoritmo
