#include <stdio.h>
main()
{
	int integerDegiskeni;
	double doubleDegiskeni;
	float  floatDegiskeni;
	char charDegiskeni;
	
	/* C dilinin anahtar s�zc�klerinden biri olan sizeof bir operat�r g�revindedir. 
	Tek terimli (unary) olan ve �nek konumunda (prefix) bulunan sizeof operat�r�, bir 
	nesnenin bellekte ka� byte yer kaplad��� de�erini �retir. Bu operat�r�n �retti�i de�er, 
	derleme zaman�nda derleyici i�in bir sabit ifadesidir.*/
	
	printf("integer degiskeninin bellekte karsiladigi yer = %d\n",sizeof(integerDegiskeni));
	printf("double degiskeninin bellekte karsiladigi yer = %ld\n",sizeof(doubleDegiskeni));
    printf("float degiskeninin bellekte karsiladigi yer = %f\n",sizeof(floatDegiskeni));
	printf("char degiskeninin bellekte karsiladigi yer = %c\n",sizeof(charDegiskeni));
return 0;

}
