#include <stdio.h>
main()
{
	int birinci,ikinci,ucuncu,artimatikortalama;
	
/*	printf("1. sayiyi gir \n");
	scanf("%d",&birinci);
	printf("2. sayiyi gir \n");
	scanf("%d",&ikinci);
	printf("3. sayiyi gir  \n");
	scanf("%d",&ucuncu);
*/
    printf(" 3 sayi gir   =\n");
	scanf("%d %d %d",&birinci,&ikinci,&ucuncu);	
	artimatikortalama=(birinci+ikinci+ucuncu)/3;
	
	printf("aritmatik ortalama =%d",artimatikortalama);
}
