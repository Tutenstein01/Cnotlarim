#include <stdio.h>
#include <math.h>

int main(void)
{
	int sayi, rakam, toplam = 0;
	printf("\nBir Sayi Giriniz : ");
	scanf("%x", &sayi);
	while(sayi > 0) {
		rakam = sayi % 10;
		toplam = toplam + rakam;
		sayi = sayi / 10;
	}
	printf("\nSayidaki rakamlarin toplami : %i", toplam);
	return 0;
}
