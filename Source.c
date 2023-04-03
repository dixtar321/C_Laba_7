#include <stdio.h>
#include <stdlib.h>
#include "my_lab.h"

int main() { // Написать функцию для перевода переменной типа long в символьную строку в шестнадцатеричном представлении 
			//( ltoah( long num, char s[]) ) и тестирующую программу к ней.
	long num = 0;
	char a[36] = {0};
	char array[36] = {0};
	int r = 0;
	printf("Enter your number: ");
	scanf_s("%s", a, 36);

	printf("Enter your number system: ");
	scanf_s("%d", &r);
	if ((r > 36)||(r < 0)||(r == 1)) {
		printf("\nAnswer: Error");
	}
	else {
		printf("Answer: ");

		ltoah_my(num, &array, r);
		for (int i = 0; i < 36; i++) {
			printf("%c", array[i]);
		}
		printf(" (%d)", r);
	}

	printf("Answer(2): %s", array);


	return 0;
}// указывать систему счисления в которую переводим