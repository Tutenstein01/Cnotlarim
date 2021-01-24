#include <stdio.h>
main()
{
	int uzunkenar;
	int kisakenar;
	int alan;
	int cevre;
	printf("dikdörtgenin alanýný ve çevresini hesaplama");

	printf("uzun kenarý giriniz");
	scanf("%d", &uzunkenar);
	printf("kýsa kenarý giriniz");
	scanf("%d", &kisakenar);
	alan = uzunkenar*kisakenar;
	cevre= 2*uzunkenar+2*kisakenar;
	printf("çevre = ,%d alan =,%d alan = ,%d", cevre,alan );
}
