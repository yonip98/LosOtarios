Proceso estacionamiento_medido
	Definir hs, tarifa como entero;
	Escribir "Las tarifas por estacionemiento medido son las siguientes:";
	Escribir "Hasta 2 horas $5 c/u.";
	Escribir "Las 3 siguientes a $4 c/u.";
	Escribir "Las 5 siguientes a $3 c/u.";
	Escribir "A partir de las 10 horas $2 c/u.";
	Escribir "Ingrese las horas que dejó su vehículo estacionado:";
	Leer hs;
	Si hs <= 2 Entonces
		tarifa=hs*5;
		Escribir "Usted debe abonar: $", tarifa, ".";
	SiNo
		Si hs <= 5 Entonces
			hs=hs-2;
			tarifa=hs*4+10;
			Escribir "Usted debe abonar: $", tarifa, ".";
		SiNo
			Si hs > 5 y hs <= 10 Entonces
				hs=hs-5;
				tarifa=hs*3+22;
				Escribir "Usted debe abonar: $", tarifa, ".";
			SiNo
				hs=hs-10;
				tarifa=hs*2+37;
				Escribir "Usted debe abonar: $", tarifa, ".";
			Fin Si
		Fin Si
	Fin Si
FinProceso
