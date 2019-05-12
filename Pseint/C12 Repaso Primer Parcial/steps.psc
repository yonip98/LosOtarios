Proceso steps
	definir n, imp, step, m, f, trans como entero;
	definir x, s, r como real;
	escribir "Ingrese el ángulo a calcular:";
	leer x;
	//La variable r es el ángulo en radianes
	r = x * pi / 180;
	escribir "ingrese la cantidad de pasos:";
	leer n;
	//"n" es la cantidad de pasos
	imp = 3;
	trans = (-1);
	s = r;
	Para step<-1 Hasta n Con Paso 1 Hacer
	//"step" es el orden de los pasos a partir de 1
		escribir "Step: ", step;
		imprimir "Impar: ", imp, ".";
		m = 1;
		f = 1;
		Repetir
			f = f * (m + 1);
			m = m + 1;
		mientras que m < imp;
		f = f * trans;
		escribir "factorial de ", imp, ": ", f;
		escribir "";
		s = s + (r ^ imp) / f;
		escribir "El seno de ", x, " se aproxima a ", s, ".";
		escribir "";
		imp = imp + 2;
		trans = trans * (-1);
		//Suma impares a partir del 3 de dos en dos
	fin para
FinProceso