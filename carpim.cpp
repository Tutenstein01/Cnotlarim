#include <stdio.h>

//22.01.21 12:48
main()
{
	int carpim,sayi1,sayi2,bolme,toplama,cikarma;
	printf("bir sayi gir  =");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi gir  =");
	scanf("%d",&sayi2);
	carpim=sayi1*sayi2;
	bolme=sayi1/sayi2;
	toplama=sayi1+sayi2;
	cikarma=sayi1-sayi2;
	printf("carpim = %d\n",carpim);
	printf("bolme = %d\n",bolme);
	printf("cikarma = %d\n",cikarma);
	printf("toplama = %d\n",toplama);

	return 0;
}
