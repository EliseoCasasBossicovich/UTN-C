// El siguiente pseudocódigo fue realizado en PSeInt

Algoritmo ejercicio_4
	Definir mejoresPromedios, peoresPromdedios, i Como Entero;
	Definir num,  totalTiempo, promedio Como Real;
	Dimension num[10];
	
	Escribir "Ingrese el tiempo de los 10 corredores:";
	Para i <- 1 Hasta 10 Con Paso 1 Hacer
		Leer num[i]
		totalTiempo <- totalTiempo + num[i]
	FinPara
	promedio <- totalTiempo / 10;
	Para i <- 1 Hasta 10 Con Paso 1 Hacer
		Si	num[i] > promedio
			Entonces
			mejoresPromedios <- mejoresPromedios + 1
		SiNo
			peoresPromdedios <- peoresPromdedios + 1
		FinSi
	FinPara
	Escribir "El promedio de tiempo de los corredores fue:";
	Escribir promedio;
	Escribir "Los corredores con un tiempo mayor al promedio son:";
	Escribir mejoresPromedios;
	Escribir "Los corredores con un tiempo menor al promedio son:";
	Escribir peoresPromdedios;
FinAlgoritmo
 