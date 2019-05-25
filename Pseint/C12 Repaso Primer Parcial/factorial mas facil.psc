Proceso sin_titulo
	Definir N, FACT, I Como Real;
		Escribir "calcular factoriales";
		Escribir "digite el numero";
		Leer N;
		FACT = 1;
		Para I=1 Hasta N Con Paso 1 Hacer
			FACT <- FACT*I;
		FinPara
		Escribir "El factorial de: ",N, " Es: ", FACT;
FinProceso

