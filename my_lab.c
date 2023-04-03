#include "my_lab.h"
#include <math.h>
void ltoah_my(unsigned long num, char* s, int r)

{
	int i = 0, j = 0;
	int a = 1;
	char Ci[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char buf[36] = {0};
	if (num == 0)
		printf("0");

		for (i = 0; num > 0; i++) {
			buf[i] = Ci[num % r];
			num /= r;
		}
		i--;	// Переворачиваем
		for (j = 0; i >= 0; j++, i--) 
			s[j] = buf[i];
		s[j++] = '\0';
} 

long hex_to_dec(char st[36])
{
    int i, k, f;
    long s = 0;
    if (st[2] == '-') {
        i = 3;
    }
    else i = 2;
    for (i; st[i] != '\0'; i++)
    {

        int c;
        switch (c = toupper(st[i]))
        {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
            k = c - 'A' + 10;
            break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            k = c - '0';
            break;
        }
        s = (s << 4) + k;
    }
    return s;

}

long octal_to_dec(char st[36]) {
    int i = 0, k = 0, f = 0;
    long s = 0;
    if (st[1] == '-') {
        i = 2;
    }
    else i = 1;
    for (i; st[i] != '\0'; i++)
    {

        int c;
        switch (c = st[i])
        {

        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '0':
            k = c - '0';
            break;
        }
        if ((c == '8') || (c == '9')) {
            printf("break");
            break;

        }
        s = (s << 3) + k;
    }
    return s;
}
//
//void ltoab(long num, char* s, int syst) {
//    int i = 0;
//    char mod = 0;
//    if (num == 0) {
//        s[i] = 0;
//        i++;
//    }
//
//    while (num != 0) {
//        mod = (num % syst);
//        s[i] = mod;
//        num = num / syst;
//        i++;
//    }
//
//    s[i] = '.';
//
//    int i = 0;
//    while (s[i] != '.') {
//        i++;
//    }
//    i--;
//    while (i >= 0) {
//        printf("%d", s[i]);
//        i--;
//    }
//}

long obrat(long num, char* s) {
    int N = 0;
    for (int i = 0; s[i] != 0; i++)
        N++;

    for (int i = N; i >= 0; i--) {
        if (s[i] == '1') {
            num += pow(2, i);
        }
    }
    return num;
}

