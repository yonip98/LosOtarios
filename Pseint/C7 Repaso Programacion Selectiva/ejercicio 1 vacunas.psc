Proceso vacunas
	definir edad Como Entero;
	definir sexo Como Caracter;
	Escribir "Ingrese su edad:";
	Leer edad;
	Si edad >= 70 Entonces
		Escribir "A usted se le debe aplicar la vacuna de tipo C.";
	SiNo
		Si edad >= 16 y edad <= 69 Entonces
			Escribir "Ingrese su sexo:";
			Escribir "M. Masculino.";
			Escribir "F. Femenino.";
			Leer sexo;
			Segun sexo Hacer
				"m":
					Escribir "A usted se le debe aplicar la vacuna de tipo A.";
				"f":
					Escribir "A usted se le debe aplicar la vacuna de tipo B.";
				De Otro Modo:
					Escribir "No ingresó una opción válida.";
			Fin Segun
		SiNo
			Si edad >= 0 Entonces
				Escribir "Se le debe aplicar la vacuna de tipo A.";
			SiNo
				Escribir "No está permitido ingresar datos negativos.";
			Fin Si			
		Fin Si
	Fin Si
FinProceso
