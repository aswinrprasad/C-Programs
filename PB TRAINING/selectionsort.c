#include <stdio.h>
#include <malloc.h>
int main(){
	int n,min=0,temp;
	printf("Enter size of the array :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int j=0;j<n;j++)
	{
		min=j;
		for(int i=j;i<n;i++){
			if(a[i]<a[min]){
				min=i;
			}
		}
		temp=a[min];
		a[min]=a[j];
		a[j]=temp;
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
