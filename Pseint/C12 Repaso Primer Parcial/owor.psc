Proceso opciones
	definir x como entero;
	definir z como caracter;
	escribir "Elija las siguientes opciones:";
	escribir "1";
	escribir "2";
	escribir "3";
	leer x;
	Repetir
		Segun x Hacer
			1:
				escribir "opción 1";
			2:
				escribir "opción 2";
			3:
				escribir "opción 3";
			De Otro Modo:
				escribir "no es una opción válida";
		Fin Segun
		escribir "desea continuar con el algoritmo?";
		escribir "S. Sí, para continuar";
		escribir "N. No, para salir";
		leer z;
		Si z = "s" Entonces
			escribir "Elija las siguientes opciones:";
			escribir "1";
			escribir "2";
			escribir "3";
			leer x;	
		Fin Si
		si z = "n" Entonces
			escribir "gracias noob";
		FinSi
	Mientras Que z != "n" y z = "s";
	
FinProceso
