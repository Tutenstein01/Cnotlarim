#include <stdio.h>
main()
{
int s1,s2,s3;

	printf("3 deger giriniz\n");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	if(s1>s2 || s1 > s3){
		if (s2 > s3){
			printf("s1>s2>s3 \n");
			
		}
		
		else{
			printf("s1>s3>s2  \n ");
		}
	}
	
	else if(s2>s1 || s2 >s3){
	
	    if(s1>s3){
	    	printf("s2>s1>s3 \n");
		}
		
		else{
			printf("s2>s3>s1 \n");
		}
		}
		
	else{
		
		if(s1>s2){
			printf("s3>s1>s2 \n");
			}
			
		else{
			printf("s3>s2>s1 \n");
		}
		
		
	}
}
