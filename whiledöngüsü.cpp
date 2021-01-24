#include <stdio.h>
int main(){
int i=0;
while(i<=1050){
	if(i%2==0){
		while(i%3==0){
			printf("%d \n",i);
				i++;

		}
	
	}
	i++;
}
}
