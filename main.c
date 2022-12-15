#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	system("COLOR 3");
	printf("EGEMEN SANAL\nOGRENCI NO: 1220505051\nBIR ZAR ATAN VE ZAR 6 GELMEDEN ONCE KAC KEZ ATILDIGINI EKRANA YAZDIRAN C PROGRAMI\n\n");
    int zar;
	int deneme;

    
    srand(time(0)); // zamana bagli kod uretme

    do
    {
        // zar atma
        zar = rand() % 6 + 1;
        deneme++;
		printf("%d.DENEME = %d\n",deneme,zar);
    }
    while(zar < 6); //zar 6 dan kucuk gelirse dongu devam eder 6 dan buyuk yani 6 gelirse durur.

    printf("%d DENEMEDE  6 GELDI\n",deneme);

    return 0;
}
