/*Program to print sum of the digits on n numbers.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	printf("Enter how many numbers you want to find the sum of digits of :");
	scanf("%d",&size);
	int a[100],val;
	printf("\nEnter the numbers whose digits you want to find the sum of :");
	for(int i=0;i<size;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<size;i++)
	{
		int sum=0,dup=a[i];
		while(a[i]>0)
		{
			val=a[i]%10;
			sum+=val;
			a[i]/=10;
		}
		printf("\nThe sum of the digits of %d is : %d",dup,sum);
	}
	printf("\n");
	return 0;
} 
