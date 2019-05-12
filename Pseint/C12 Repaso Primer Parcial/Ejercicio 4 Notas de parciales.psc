Algoritmo parciales
	definir n, a, b, opc, apr, des, i, nma, nmb, dieces como entero;
	definir ops como caracter;
	escribir "Bienvenido al algoritmo de parciales!";
	escribir "";
	escribir "Ingrese la cantidad de alumnos:";
	leer n;
	Mientras n<=0 Hacer
		escribir "El valor ingresado no es correcto, intente de nuevo:";
		leer n;
	Fin Mientras
	escribir "1. Cargar notas de primer y segundo parcial y mosotrar aprobados.";
	//En esta opción se cargan valores de entre 1 y 10 con contadores "apr" (aprobados) y "des" (desaprobados)
	//Para que "apr" cuente +1 se debe aprobar los dos parciales con 6 o más, en caso de desaprobar alguno se cuenta "des" +1
	escribir "2. Cargar notas del primer parcial y mostrar la nota más alta y la nota más baja.";
	escribir "3. Cargar notas del segundo parcial, mostrar si hubo 10 y cantidad de notas del uno al 6.";
	escribir "";
	escribir "Ingrese opción:";
	leer opc;
	Mientras opc > 3 o opc <= 0 Hacer
		escribir "Debe elegir una opción entre el 1 y el 3, vuelva a intentarlo:";
		leer opc;
	Fin Mientras
	Repetir
		Segun opc Hacer
			caso 1:
				//Cargar notas de primer y segundo parcial y mosotrar aprobados
				escribir "Usted ha elegido la opción 1";
				apr = 0;
				des = 0;
				Para i<-1 Hasta n Con Paso 1 Hacer
					escribir "Ingrese la nota del primer parcial:";
					leer a;
					Mientras a <= 0 o a > 10 Hacer
						escribir "La nota debe ser del 1 al 10:";
						leer a;
					Fin Mientras
					si a >= 6 Entonces
						escribir "Ingrese la nota del segundo parcial:";
						leer b;
						Mientras b <= 0 o b > 10 Hacer
							escribir "La nota debe ser del 1 al 10:";
							leer b;
						Fin Mientras
						si b >= 6 entonces
							apr = apr + 1;
						sino des = des + 1;
						FinSi
					SiNo
						des = des + 1;
					FinSi
				Fin Para
				escribir "La cantidad de aprobados es " apr, " y la cantidad de desaprobados es ", des, ".";
				escribir "";
			caso 2:
				//Cargar notas del primer parcial y mostrar la nota más alta y la nota más baja
				escribir "Usted ha elegido la opción 2";
				escribir "";
				nma = 0;
				nmb = 10;
				Para i<-1 Hasta n Con Paso 1 Hacer
					escribir "Ingrese la nota del primer parcial:";
					leer a;
					si a < nmb entonces 
						//"a" pisa el valor "nmb" siempre que sea menor, por eso se lo inicializa con un valor alto
						nmb = a;
					FinSi
					si a > nma entonces
						//"a" pisa el valor "nma" siempre que sea mayor, por eso se lo inicializa con un valor bajo
						nma = a;
					FinSi
					//Al filanizar, el algoritmo se repite en bucle siempre y cuando "i" sea distinto de "n"
					//Se vuelve a solicitar que se ingrese el valor para la variable "a", por lo que
					//"a" cambia todo el tiempo, pero "nmb" y "nma" sólo cambian si se cumplen las condiciones
				Fin Para
				escribir "";
				escribir "La nota más alta es ", nma, " y la más baja es ", nmb, ".";
			caso 3:
				//Cargar notas del segundo parcial, mostrar si hubo 10 y cantidad de notas del 1 al 6
				escribir "Usted ha elegido la opción 3";
				escribir "";
				dieces = 0;
				des = 0;
				Para i<-1 Hasta n Con Paso 1 Hacer
					//Condición para que el valor ingresado sea inválido, osea repite el bucle hasta que desvie por falso
					escribir "Ingrese la nota del segundo parcial";
					leer b;
					Mientras b <= 0 o b > 10 Hacer
						escribir "La nota debe ser del 1 al 10:";
						leer b;
						//Es decir que del 1 al 10 desvía por falso y comienza el algoritmo
					fin mientras
					si b = 10 entonces
						dieces = dieces + 1;
					finsi
					si b <= 6 entonces
						des = des + 1;
					finsi
				fin para
				escribir "La cantidad de dieces es ", dieces, " y la cantidad de notas del 1 al 6 son ", des ".";
		fin segun
		escribir "desea salir del algoritmo?";
		escribir "S. Sí, para salir.";
		escribir "N, No, deseo repetir el algoritmo.";
		leer ops;
		Segun ops Hacer
			"n":
				ops = "n";
			"s":
				ops = "s";
			De Otro Modo:
				escribir "ingrese una opción válida";
		Fin Segun
		Si ops = "n" Entonces
			escribir "Bienvenido de nuevo!";
			escribir "";
			escribir "Ingrese la cantidad de alumnos:";
			leer n;
			escribir "1. Cargar notas de primer y segundo parcial y mosotrar aprobados.";
			escribir "2. Cargar notas del primer parcial y mostrar la nota más alta y la nota más baja.";
			escribir "3. Cargar notas del segundo parcial, mostrar si hubo 10 y cantidad de notas del uno al 6.";
			escribir "";
			escribir "Ingrese opción:";
			leer opc;
		fin si
	Mientras Que ops = "n"
	
	escribir "Gracias otario, atte fd";
FinAlgoritmo