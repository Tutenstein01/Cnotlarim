#include <stdio.h>
main()
{
	int kenaruzunluk;
	int alan;
	int cevre;
	printf("karenin alan�n� ve �evresini hesaplama");

	printf("kenar uzunlugunu  giriniz");
	scanf("%d", &kenaruzunluk);
	alan = kenaruzunluk*kenaruzunluk;
	cevre= kenaruzunluk*4;
	printf("�evre = ,%d alan =,%d alan = ,%d", cevre,alan );
}
