#include <stdio.h>
main()
{
	int uzunkenar;
	int kisakenar;
	int alan;
	int cevre;
	printf("dikd�rtgenin alan�n� ve �evresini hesaplama");

	printf("uzun kenar� giriniz");
	scanf("%d", &uzunkenar);
	printf("k�sa kenar� giriniz");
	scanf("%d", &kisakenar);
	alan = uzunkenar*kisakenar;
	cevre= 2*uzunkenar+2*kisakenar;
	printf("�evre = ,%d alan =,%d alan = ,%d", cevre,alan );
}
