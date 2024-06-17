Algoritmo ejercicio_9
	Definir i, array1, array2, arrayResultado, long Como Entero
	
	Escribir "Introduce el tamanio del arreglo (debe ser mayor que 2): ";
	Leer long;
	
	Mientras long <= 2 Hacer
        Escribir "Tamanio no valido. Debe ser mayor que 2. Intentalo de nuevo: ";
        Leer long
    Fin Mientras
	
	Dimension array1[long], array2[long], arrayResultado[long];
	
	Escribir "Introduce los elementos del primer arreglo: ";
	Para i = 0 Hasta long-1 Con Paso 1 Hacer
		Escribir "Elemento ", i+1, ": ";
		Leer array1[i];
	FinPara
	
	Escribir "Introduce los elementos del segundo arreglo:";
    Para i = 0 Hasta long-1 Con Paso 1 Hacer
        Escribir "Elemento ", i+1, ": ";
        Leer array2[i];
    Fin Para
	
	Para i = 0 Hasta long-1 Con Paso 1 Hacer
        arrayResultado[i] = array1[i] + array2[i];
    Fin Para
	
	Escribir "La suma de ambos arreglos es: ";
    Para i = 0 Hasta long-1 Con Paso 1 Hacer
        Escribir "Elemento ", i+1, ": ", arrayResultado[i];
    Fin Para
	
FinAlgoritmo
