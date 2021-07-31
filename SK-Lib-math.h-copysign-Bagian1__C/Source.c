#include <stdio.h>      /* printf */
#include <math.h>       /* copysign */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	printf("copysign ( 10.0,-1.0) = %f\n", copysign(10.0, -1.0));
	printf("copysign (-10.0,-1.0) = %f\n", copysign(-10.0, -1.0));
	printf("copysign (-10.0, 1.0) = %f\n", copysign(-10.0, 1.0));

	_getch();
	return 0;
}