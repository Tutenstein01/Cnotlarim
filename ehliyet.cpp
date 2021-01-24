#include <stdio.h>
main()
{
	int yas;
	char isim[20],soyisim[20];
	printf("kullanici adinizi giriniz  = \n");
	scanf("%s",&isim);
	printf("soyadini gir   =\n");
	scanf("%s",&soyisim);
	printf("yasinizi giriniz  =\n");
	scanf("%d",&yas);
	
	if(yas>=18){
		printf(" ehliyet alabilirsin  %s %s ",isim,soyisim);
	}
	else{
		printf("ehliyet alabilirsin  , ", isim,soyisim);
	} 
}
