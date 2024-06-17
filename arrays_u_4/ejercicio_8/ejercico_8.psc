// El siguiente pseudocodigo fue realizado en PSeInt

Algoritmo ejercico_8
	Definir i, j, totalSuma, tablan, num Como Entero;
	Dimension tabla[4,3];
	
	Para i <- 0 Hasta 3 Con Paso 1 Hacer
		Para j <- 0 Hasta 2 Con Paso 1 Hacer
			Escribir Sin Saltar "Ingresa el numero en la posicion ", i, "-", j ;
			Leer num;
			tabla[i,j] <- num;
			totalSuma <- totalSuma + tabla[i,j];
		FinPara
	FinPara
	
	Escribir "La tabla numerica quedo de esta forma:";
	
	Para i <- 0 Hasta 3 Hacer
		Para j <- 0 Hasta 2 Con Paso 1 Hacer
			Escribir Sin Saltar tabla[i , j];
		FinPara
		Escribir "";
	FinPara
	Escribir  "El resultado de la suma de todos los numeros es: ", totalSuma;
	
FinAlgoritmo