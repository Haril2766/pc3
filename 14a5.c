#include<stdio.h>
void main(){
	int n,i,count=0;
/*	printf("Enter number of array : ");
	scanf("%d",&n);*/
	
	int a[5],b[5];
	
	for(i=0;i<5;i++)
	{
		printf("Enter Hight  : ");
		scanf("%d",&a[i]);
	}
	i=0;
	for(i=0;i<5;i++)
	{
		printf("Enter Weight  : ");
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]>170){
			if(b[i]<=50){
				count++;
			}
		}
		
	}
	printf("Number of person %d",count);
}
