#include <stdio.h>
int main(){
int i;
int sayi,ctopla=0,ttopla=0;

printf("bir sayi gir");
scanf("%d",&sayi);

for(i=0;i<=sayi;i++){
	
	if(i%2==0){
		printf("%d\n",i);
		ctopla=ctopla+i;
	
	}
	else{
		
		ttopla+=i;
	}
}	
printf("girdiginiz sayinin çiftlerinin toplamý =%d\n teklerinin toplamý = %d\n",ctopla,ttopla);
}
