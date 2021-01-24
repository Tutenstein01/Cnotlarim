#include <stdio.h>
main()
{
	int integerDegiskeni;
	double doubleDegiskeni;
	float  floatDegiskeni;
	char charDegiskeni;
	
	/* C dilinin anahtar sözcüklerinden biri olan sizeof bir operatör görevindedir. 
	Tek terimli (unary) olan ve önek konumunda (prefix) bulunan sizeof operatörü, bir 
	nesnenin bellekte kaç byte yer kapladýðý deðerini üretir. Bu operatörün ürettiði deðer, 
	derleme zamanýnda derleyici için bir sabit ifadesidir.*/
	
	printf("integer degiskeninin bellekte karsiladigi yer = %d\n",sizeof(integerDegiskeni));
	printf("double degiskeninin bellekte karsiladigi yer = %ld\n",sizeof(doubleDegiskeni));
    printf("float degiskeninin bellekte karsiladigi yer = %f\n",sizeof(floatDegiskeni));
	printf("char degiskeninin bellekte karsiladigi yer = %c\n",sizeof(charDegiskeni));
return 0;

}
