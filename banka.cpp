#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char ad[10]="son";
	char istenicekisim[10];
	int secim2,sifre,bakiye,istenicekparola,secim,yatirma,cekme;
	int exit;
	sifre=1234;
	bakiye=1000;
	printf("\n Welcome to the SbanK\n");
	printf("enter your username \n");
	scanf("%s",&istenicekisim);
	printf("enter your password \n");
	scanf("%d",&istenicekparola);
	
	if(strcmp(ad,istenicekisim)==0 && istenicekparola==sifre){
	printf("your user information has matched . \n");
	printf("Please choose one of the following actions  :\n");
	printf("1 deposit money     \n 2  withdraw money   \n 3  user information \n");
    scanf("%d",&secim);    
    switch(secim) {
    	case 1:
    		printf("how much money would you like to deposit \n");
    		scanf("%d",&yatirma);
    		bakiye+=yatirma;
    		printf("transaction successful :\n the money you invested :%d\n total amount  :%d \n",yatirma,bakiye);
    	
    		break;
    	case 2:
    		printf("how much money would you like to receive? \n");
    		scanf("%d",&cekme);
    		bakiye-=cekme;
    		printf("transaction successful :\n the money you invested :%d\n total amount  :%d \n",cekme,bakiye);
    	
    		break;
    	case 3:
    		printf("welcome to the user interface \n");
    	    printf("what information would you like to change?");
    	    printf("please choose \n 1 name \n 2 password ");
    	    scanf("%d",secim2);
    	    if(secim2==1){
    	    	printf(" enter new name.");
    	    	scanf("%s",&ad);
    	    	printf("your new name : %s",ad);
    	    	
			            }
			if(secim2==2){
				printf(" enter new password.");
    	    	scanf("%s",&sifre);
    	    	printf("your new name : %s",ad);
    	    	
			            }
    	    break;
    	case 4:
    		printf("your transaction is done.");
    		break;
	
                }
           
            }
}
