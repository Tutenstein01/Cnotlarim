//2x^2 +3y+9


#include <stdio.h>
main()
{
	/*   
    // 'r=a^b' �s alma i�lemi pow fonksiyonu ile yap�l�yor
    // sonu� 'r' de�i�kenine kaydediliyor.
    r=pow(a,b);*/
	int x , y , denklem;
	
	printf("x degeri = \n");
	scanf("%d",&x);
	printf("y degeri = \n");
	scanf("%d",&y);
	denklem=((2*(x*x))+(3*y)+1);

	printf(" denklem sonucu = %d",denklem);
	return 0;
	
}
