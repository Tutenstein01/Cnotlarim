#include<stdio.h>
//girilen sayıyı tersten yazma
int main(){
int sayi,ters;
printf("lütfen bir sayi giriniz");
scanf("%d",&sayi);

while(sayi!=0){
	ters=ters*10;
	ters=ters+sayi%10;
	sayi=sayi/10;
	
}
printf("\n Girdiginiz sayinin tersi : %d",ters);
return 0;,
}
