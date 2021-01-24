#include <stdio.h>
main()
{
	int vize ,final,ort;
	printf("vize ve final notunu gir  =\n");
	scanf("%d %d",&vize,&final);
	ort=(vize*0.4)+(final*0.6);

	if(ort >=50){
	 printf("dersten gectin =%d",ort);
	}
	else{
	
	 printf("kaldýn =%d ile",ort);	
}
}
