#include<stdio.h>
//girilen say�y� tersten yazma
int main(){
int sayi,ters;
printf("l�tfen bir sayi giriniz");
scanf("%d",&sayi);

while(sayi!=0){
	ters=ters*10;
	ters=ters+sayi%10;
	sayi=sayi/10;
	
}
printf("\n Girdiginiz sayinin tersi : %d",ters);
return 0;,
}
