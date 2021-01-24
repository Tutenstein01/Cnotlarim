#include <stdio.h>
main()
{
	
    int secim,sayi1,sayi2,toplama,cikarma,carpma,bolme;
	printf("iki sayi giriniz \n ");
	scanf("%d %d",&sayi1,&sayi2);
	printf("secim yapýnýz   \n 1 toplama  2 cikarma  3 carpma 4 bolme");
	scanf("%d",&secim);
switch(secim) {
	case 1:
		toplama=sayi1+sayi2;
	    printf("toplama= %d",toplama);
	 break;
	case 2:
		cikarma=sayi1-sayi2;
	    printf("cikarma= %d",cikarma); 
	    break;
	case 3:
	    carpma=sayi1*sayi2; 
	    printf("carpma = %d",carpma);
	    break;
	case 4:
		bolme=sayi1/sayi2;
		printf("bolme = %d",bolme);
		break;
	default:
	printf("yanlýþ durum sectiniz");
    break;
	
}	
}
