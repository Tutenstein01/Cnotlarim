#include <stdio.h>
main()
{
	int sec;
	printf("1 ile 3 arasýnda bir durum seçiniz");
	scanf("%d",&sec);
	
switch(sec) {
	case 1 : printf(" 1 . durumu sectiniz"); break;
	case 2 : printf("2 . durumu sectiniz"); break;
	case 3 : printf("3. durumu sectiniz "); break;
	default: printf("yanlýþ durum sectiniz"); break;
	
}	
}
