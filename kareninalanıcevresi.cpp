#include <stdio.h>
main()
{
	int kenaruzunluk;
	int alan;
	int cevre;
	printf("karenin alanýný ve çevresini hesaplama");

	printf("kenar uzunlugunu  giriniz");
	scanf("%d", &kenaruzunluk);
	alan = kenaruzunluk*kenaruzunluk;
	cevre= kenaruzunluk*4;
	printf("çevre = ,%d alan =,%d alan = ,%d", cevre,alan );
}
