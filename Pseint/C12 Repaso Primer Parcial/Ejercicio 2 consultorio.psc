Proceso el_consultorio_del_doctor_lorenzo
	definir cita, citactual, costototal Como Entero;
	//Las tres primeras citas $200
	//La 4ta y la 5ta $150 c/u
	//De la 6ta a la 9na $100 c/u
	//De la 10ma hacia arriba $50 c/u
	escribir "Bienvenido al consultorio del DOCTOR LORENZO :)";
	escribir "Ingrese número de cita:";
	leer cita;
	si cita <= 3 entonces
		citactual = 200;
		costototal = cita * 200;
	sino
		si cita > 3 y cita <= 5 entonces
			citactual = 150;
			costototal = 600 + (cita-3) * 150;
		siNo
			si cita > 5 y cita <= 9 Entonces
				citactual = 100;
				costototal = 900 + (cita-5) * 100;
			sino
				citactual = 50;
				costototal = 1200 + (cita-9) * 50;
			FinSi
		FinSi
	FinSi
	escribir "El costo de la cita es: $", citactual, ".";
	escribir "Total invertido en consultas: $", costototal, ".";
FinProceso