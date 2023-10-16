#include<stdio.h>
void main(){
	int n,i,cp=0,cn=0;
	printf("Enter number of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter value of  : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>=0){
		cp++;	
		}
		else{
			cn++;
		}
	}
	printf("Number of positive is %d and Number of Negative is %d",cp,cn);
}
