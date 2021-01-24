#include <stdio.h>
int main(){
int sayi,i,sayac=0;
printf("bir sayi gir");
scanf("%d",&sayi);
	for(int i=2;i<sayi;i++){
	 if(sayi%i==0){
			sayac++;
	}
	}
    	if(sayac==0){
		 printf("\nsayi asall sayidir");
	}
    	else{
		printf("\n Bu sayi asal bir sayi deildir");
	}
}
