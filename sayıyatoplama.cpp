#include<stdio.h>

int main(){
	int gsayi;
	printf("ltfen hesaplamak istedigin sayiyi gir");
	scanf("%d",&gsayi);
	int i=0;
	int toplam=0;
	while(i<gsayi)
	{
		printf("Degerler=%d\n",i);
		toplam+=i;
		i++;
		
	}
	printf("sonuc = %d ",toplam);
	return 0;
}
