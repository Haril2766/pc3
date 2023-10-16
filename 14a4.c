#include<stdio.h>
void main(){
	int n,i,max,min,sum=0;
	float avg=0;
	printf("Enter Number of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter value of  : ");
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++){
		sum=sum+a[i];
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
	}
	avg=sum/n;
printf("Avg Of Array is %f\n",avg);
printf("Sum of Array is %d\n",sum);
printf("Max Number of Array is %d\n",max);
printf("Min Number of Array is %d\n",min);
}
