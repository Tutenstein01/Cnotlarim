#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	
	char isim[20],soyIsim[20];
	int secim,sayi;
    printf("sansli cekilis uygulamamiza hosgeldiiz \n");
	printf("lutfen kullanici adinizi giriniz  =\n");
	scanf("%s",&isim);
	printf("soyadinizini giriniz =\n");
	scanf("%s",&soyIsim);

	printf(" 1 ve 2 arasinda secim yapiniz \n  1  sansli cekilis uygulamasini dene 2 kullanici bilgilerini kontrol et");
	scanf("%d",&secim);
	
	if(secim==1){
	 	printf("sansli cekilise hosgeldiniz \n 1 ve 5 arasinda sayi gir");
	 	scanf("%d",&sayi);
	 	srand(time(NULL));//HER ÇALIÞTIÐINDA YENÝ SAYI ÜRET
	    int randomsayi=1+rand()%5;//random sayý üretir
	    
	    if(sayi==randomsayi){
	    	
	 		printf("Girdiginiz sayi  =%d \n Cekilisteki sayi =%d \n ",sayi,randomsayi);
	 		printf("KAZANDINIZ");
		}
    
	 	if(sayi != randomsayi){
	 		
	 		printf("Kaybettin randomsayi=%d ",randomsayi);
		 
		}
   } 
	if(secim==2){
		
	 	printf("lütfen kullanýcý adýnýzý giriniz  =\n");
	    scanf("%s",&isim);
        printf("soyadýnýzýný giriniz =\n");
        scanf("%s",&soyIsim);
	}


}
