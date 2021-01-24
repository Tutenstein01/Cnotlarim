#include<stdio.h>

int main(){
	int gsayi;
	printf("ltfen hesaplamak istedigin sayiyi gir");
	scanf("%d",&gsayi);
	int i=1;
	int faktoriyel=1;
	
	while(i<gsayi)
	{
		faktoriyel*=i;
		i++;
		
	}
	printf("sonuc = %d ",faktoriyel);
	return 0;
}
