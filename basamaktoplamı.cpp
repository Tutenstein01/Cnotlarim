#include<stdio.h>
//basamaklar toplam�
int main(){
int sayi,toplam=0,kalan;
printf("sayi gir:");
scanf("%i",&sayi);

while(sayi>0);
{
	kalan=sayi%10;
	toplam=toplam+kalan;
	sayi=sayi/10;
}
	
printf("\n Basamaklar toplam� :%i",toplam);
return 0;
	
}
/*
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
}*/
