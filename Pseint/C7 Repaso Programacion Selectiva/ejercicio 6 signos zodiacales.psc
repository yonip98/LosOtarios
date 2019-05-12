Proceso signos_zodiacales
	Definir dia, opc, TDias Como Entero;
	Definir mes Como Caracter;
	Definir Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio Como Caracter;
	Definir Agosto, Septiembre, Octubre, Noviembre, Diciembre Como Caracter;
	Escribir "1. Enero";
	escribir "2. Febrero";
	escribir "3. Marzo";
	escribir "4. Abril";
	escribir "5. Mayo";
	escribir "6. Junio";
	escribir "7. Julio";
	escribir "8. Agosto";
	escribir "9. Septiembre";
	escribir "10. Octubre";
	Escribir "11. Noviembre";
	Escribir "12. Diciembre";
	escribir "Introduzca su mes de nacimiento:";
	leer opc;
	Si opc >=1 y opc <=12 Entonces
		Segun opc Hacer
			caso 1,3,5,7,8,10,12: TDias=31;
				Si opc=1 Entonces
					mes="Enero";
					Escribir "Introduzca día de nacimiento:";
					Leer dia;
					Si dia > TDias entonces
						Escribir mes " no tiene ", dia, " días.";
					SiNo
						Si dia >= 1 y dia <= 19 Entonces
							Escribir "Tu signo es Capricornio.";
						SiNo
							Escribir "Tu signo es Acuario.";
						Fin Si
					Fin Si
				SiNo
					Si opc=3 Entonces
						mes="Marzo";
						Escribir "Introduzca día de nacimiento:";
						Leer dia;
						Si dia > TDias entonces
							Escribir mes " no tiene ", dia, " días.";
						SiNo
							Si dia >= 1 y dia <= 20 Entonces
								Escribir "Tu signo es Piscis.";
							SiNo
								Escribir "Tu signo es Aries.";
							Fin Si
						Fin Si
					SiNo
						Si opc=5 Entonces
							mes="Mayo";
							Escribir "Introduzca día de nacimiento:";
							Leer dia;
							Si dia > TDias entonces
								Escribir mes " no tiene ", dia, " días.";
							SiNo
								Si dia >= 1 y dia <= 20 Entonces
									Escribir "Tu signo es Tauro.";
								SiNo
									Escribir "Tu signo es Géminis.";
								Fin Si
							Fin Si
						SiNo
							Si opc=7 Entonces
								mes="Julio";
								Escribir "Introduzca día de nacimiento:";
								Leer dia;
								Si dia > TDias entonces
									Escribir mes " no tiene ", dia, " días.";
								SiNo
									Si dia >= 1 y dia <= 22 Entonces
										Escribir "Tu signo es Cáncer.";
									SiNo
										Escribir "Tu signo es Leo.";
									Fin Si
								Fin Si
							SiNo
								Si opc=8 Entonces
									mes="Agosto";
									Escribir "Introduzca día de nacimiento:";
									Leer dia;
									Si dia > TDias entonces
										Escribir mes " no tiene ", dia, " días.";
									SiNo
										Si dia >= 1 y dia <= 23 Entonces
											Escribir "Tu signo es Leo.";
										SiNo
											Escribir "Tu signo es Virgo.";
										Fin Si
									Fin Si
								SiNo
									Si opc=10 Entonces
										mes="Octubre";
										Escribir "Introduzca día de nacimiento:";
										Leer dia;
										Si dia > TDias entonces
											Escribir mes " no tiene ", dia, " días.";
										SiNo
											Si dia >= 1 y dia <= 22 Entonces
												Escribir "Tu signo es Libra.";
											SiNo
												Escribir "Tu signo es Escorpio.";
											Fin Si
										Fin Si
									SiNo
										Si opc=12 Entonces
											mes="Diciembre";
											Escribir "Introduzca día de nacimiento:";
											Leer dia;
											Si dia > TDias entonces
												Escribir mes " no tiene ", dia, " días.";
											SiNo
												Si dia >= 1 y dia <= 21 Entonces
													Escribir "Tu signo es Sagitario.";
												SiNo
													Escribir "Tu signo es Capricornio.";
												Fin Si
											Fin Si
										Fin Si
									Fin Si
								Fin Si
							Fin Si
						Fin Si
					Fin Si
				Fin Si
			caso 4,6,9,11: TDias=30;
				Si opc=4 Entonces
					mes="Abril";
					Escribir "Introduzca día de nacimiento:";
					Leer dia;
					Si dia > TDias entonces
						Escribir mes " no tiene ", dia, " días.";
					SiNo
						Si dia >= 1 y dia <= 20 Entonces
							Escribir "Tu signo es Aries.";
						SiNo
							Escribir "Tu signo es Tauro.";
						Fin Si
					Fin Si
				SiNo
					Si opc=6 Entonces
						mes="Junio";
						Escribir "Introduzca día de nacimiento:";
						Leer dia;
						Si dia > TDias entonces
							Escribir mes " no tiene ", dia, " días.";
						SiNo
							Si dia >= 1 y dia <= 21 Entonces
								Escribir "Tu signo es Géminis.";
							SiNo
								Escribir "Tu signo es Cáncer.";
							Fin Si
						Fin Si
					SiNo
						Si opc=9 Entonces
							mes="Septiembre";
							Escribir "Introduzca día de nacimiento:";
							Leer dia;
							Si dia > TDias entonces
								Escribir mes " no tiene ", dia, " días.";
							SiNo
								Si dia >= 1 y dia <= 23 Entonces
									Escribir "Tu signo es Virgo.";
								SiNo
									Escribir "Tu signo es Libra.";
								Fin Si
							Fin Si
						SiNo
							Si opc=11 Entonces
								mes="Noviembre";
								Escribir "Introduzca día de nacimiento:";
								Leer dia;
								Si dia > TDias entonces
									Escribir mes " no tiene ", dia, " días.";
								SiNo
									Si dia >= 1 y dia <= 22 Entonces
										Escribir "Tu signo es Escorpio.";
									SiNo
										Escribir "Tu signo es Sagitario.";
									Fin Si
								Fin Si
							FinSi
						FinSi
					FinSi
				FinSi
			De Otro Modo:
				TDias=29;
				Si opc=2 Entonces
					mes="Febrero";
					Escribir "Introduzca día de nacimiento:";
					Leer dia;
					Si dia > TDias entonces
						Escribir mes " no tiene ", dia, " días.";
					SiNo
						Si dia >= 1 y dia <= 19 Entonces
							Escribir "Tu signo es Acuario.";
						SiNo
							Escribir "Tu signo es Piscis.";
						Fin Si
					Fin Si
				FinSi
		Fin Segun
	SiNo
		Escribir "El año no tiene ", opc, " meses, b0b0.";
	FinSi
FinProceso