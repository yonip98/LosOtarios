Proceso san_valentine
	Definir dinero como real;
	Escribir "Ingrese su budget: $$";
	Leer dinero;
	Si dinero > 0 Entonces
		Si dinero <= 10 Entonces
			Escribir "A usted le alcanza para comprar una tarjeta.";
		SiNo
			Si dinero > 10 y dinero <= 100 Entonces
				Escribir "A usted le alcanza para unos chocolates.";
			SiNo
				Si dinero > 100 y dinero <= 250 Entonces
					Escribir "Usted podría comprar unas bonitas flores.";
				SiNo
					Escribir "Usted puede permitirse un anillo para esa persona especial.";
				Fin Si
			Fin Si
		Fin Si
	SiNo
		Escribir "Lamentablemente no podrá comprar nada.";
	Fin Si
FinProceso
