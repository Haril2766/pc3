#include<stdio.h>
void main(){
	int n,i;
	printf("Enter Number of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter value of  : ");
		scanf("%d",&a[i]);
	}
	for(i=n-1;i!=-1;i--){
		printf("revers number : %d\n",a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
}}
