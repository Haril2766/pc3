#include<stdio.h>
void main(){
	int n,i,co=0,ce=0;
	printf("Enter number of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter value of  : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
		ce++;	
		}
		else{
			co++;
		}
	}
	printf("Number of odd is %d and Number of even is %d",co,ce);
}
