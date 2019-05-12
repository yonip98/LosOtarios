Proceso Ejercicio_2
	definir N,R, mayc, menc, ceros como entero;
	mayc = 0;
	menc = 0;
	ceros = 0;
	Escribir "Ingrese cantidad de números a escanear:";
	Leer N;
	Para N<-1 Hasta N Con Paso 1 Hacer
		Escribir "1 valor:";
		Leer R;
		Si R = 0 Entonces
			ceros = ceros + 1;
		SiNo
			Si R < 0 Entonces
				menc = menc + 1;
			SiNo
				mayc = mayc + 1;
			Fin Si
		Fin Si
	Fin Para
	Escribir "Cantidad de ceros: ", ceros,".";
	Escribir "Cantidad de números menores a cero: ", menc,".";
	Escribir "Cantidad de números mayores a cero: ", mayc,".";
FinProceso