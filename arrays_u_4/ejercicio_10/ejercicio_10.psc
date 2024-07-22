Algoritmo ejercicio_10
	Definir resultadoEmpresa, resultadoVendedor, vendedores, venta Como Real
	Definir  i, j, cantidadVendedores Como Entero
	Escribir "Introduce la cantidad de vendedores (Minimo 1): ";
	Leer cantidadVendedores;
	
	Mientras cantidadVendedores < 1 Hacer
        Escribir "Minimo tiene que haber 1 vendedor: ";
        Leer cantidadVendedores
    Fin Mientras
	
	Dimension vendedores[cantidadVendedores, 5];
	
	Escribir "Ingrese las ventas de los 5 productos por vendedor: ";
	Para i = 0 Hasta cantidadVendedores-1 Con Paso 1 Hacer
		Escribir "Vendedor ", i+1, ": ";
		Para j = 0 Hasta 4 Con Paso 1 Hacer
			Escribir "Total producto ", j+1, ": ";
			Leer vendedores[i, j];
		FinPara
	FinPara
	
	Para i = 0 Hasta cantidadVendedores-1 Con Paso 1 Hacer
		resultadoVendedor = 0;
		Para j = 0 Hasta 4 Con Paso 1 Hacer
			resultadoVendedor <- resultadoVendedor + vendedores[i,j];
		FinPara
		Escribir "El resultado del vendedor ", i+1, " es: ", resultadoVendedor;
		resultadoEmpresa <- resultadoEmpresa + resultadoVendedor;
	FinPara
	Escribir "El los ingresos totales de la tienda fueron: ", resultadoEmpresa;
	
FinAlgoritmo
