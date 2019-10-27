#include<stdio.h>
#include<malloc.h>
int main()
{
	int n,i,j,b,c=0,box,min=0,max;
	scanf("%d",&n);
	max=n-1;
	int **a= (int **)malloc(n*sizeof(int *));
	
	for(i=0;i<n;i++)
	{
		*(a+i)=(int *)malloc(n*sizeof(int));
	}
	if(n%2==0)
	{
		b=n/2;
	}
	else
	{
		b=(n/2)+1;
	}
	for(box=1;box<=b;box++)
	{
		for(i=min;i<=max;i++)
		{
			a[min][i]=++c;
		}
		for(i=min+1;i<=max;i++)
		{
			a[i][max]=++c;
		}
		for(i=max-1;i>=min;i--)
		{
			a[max][i]=++c;
		}
		for(i=max-1;i>=min+1;i--)
		{
			a[i][min]=++c;
		}
		min++;
		max--;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
