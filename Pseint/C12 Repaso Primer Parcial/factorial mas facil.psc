Proceso sin_titulo
	Definir N, FACT, I, U Como Real;
		Escribir "calcular factoriales";
		Escribir "digite el numero";
		Leer N;
		FACT = 1;
		Si N == 0 Entonces
			U = 0;
		Sino
			U = 1;
		Fin Si
		Para I=U Hasta N Con Paso 1 Hacer
			FACT <- FACT*I;
		FinPara
		Escribir "El factorial de: ",N, " Es: ", FACT;
FinProceso
