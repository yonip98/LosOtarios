Proceso horas_extra
	Definir ht, he como entero;
	Escribir "Ingrese la cantidad de horas trabajadas";
	Leer ht;
	Si ht <= 40 Entonces
		Escribir "A usted le corresponden ", ht, " horas de pago.";
	SiNo
		he=ht-40;
		Escribir "A usted le corresponde el sueldo completo y ", he, " horas extras.";
	Fin Si
FinProceso
