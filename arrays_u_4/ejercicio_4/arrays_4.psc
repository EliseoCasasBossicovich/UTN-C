// El siguiente pseudocódigo fue realizado en PSeInt

Algoritmo ejercicio_4
	Definir num, i, numMayor Como Entero;
	Dimension num[10];
	Escribir "Ingrese 10 numeros positivos enteros:";
	Para i <- 1 Hasta 10 Con Paso 1 Hacer
		Leer num[i]
		si	num[i] > numMayor 
			Entonces
			numMayor <- num[i]
		FinSi
	FinPara
	Escribir "El mayor numero es:";
	Escribir numMayor;
FinAlgoritmo
 