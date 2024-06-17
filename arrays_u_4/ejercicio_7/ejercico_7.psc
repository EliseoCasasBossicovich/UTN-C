// El siguiente pseudocodigo fue realizado en PSeInt
Algoritmo ejercico_7
	Definir i, j Como Entero;
	Dimension paises[4,4];
	
	paises[0,0] = "Pais ";
	paises[0,1] = "Ciudad 1 ";
	paises[0,2] = "Ciudad 2 ";
	paises[0,3] = "Ciudad 3 ";
	
	paises[1,0] = "Arg ";
	paises[1,1] = "BsAs ";
	paises[1,2] = "Ros ";
	paises[1,3] = "Cor ";
	
	paises[2,0] = "Col ";
	paises[2,1] = "Cali ";
	paises[2,2] = "Bgt ";
	paises[2,3] = "St M ";
	
	paises[3,0] = "Br ";
	paises[3,1] = "Brasilia ";
	paises[3,2] = "RdJ ";
	paises[3,3] = "Sn P ";
	
	Escribir "El listado de paises es: ";
	
	Para i <- 0 Hasta 3 Hacer
		Para j <- 0 Hasta 3 Con Paso 1 Hacer
			Escribir Sin Saltar paises[i, j];
		FinPara
		Escribir "";
	FinPara
	
FinAlgoritmo