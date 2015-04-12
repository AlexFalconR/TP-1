/*Tabla de conversión de Celsius-Fahrenheit
 * Alex Nicolás Falcon Rodríguez
 * Domingo 12/04/2015
 */

#include <stdio.h>

int main(void) {
	float fahr,cels;
	int ls, a;
	cels = -20;
	ls = 140;
	a = 20;
	while (cels <= ls) {
		fahr = ((cels) * (9. / 5. )) + ( 32. );
		printf ("Celsius 		 Fahrenheit\n");
		printf ("%3.1f°			 %3.1f F°\n", cels, fahr);
		cels = cels + a;
	}
	return 0;
}
