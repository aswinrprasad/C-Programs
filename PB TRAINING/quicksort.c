#include <stdio.h>
#include <malloc.h>
void quicksort(int list[],int low,int high){
	int pivot,i,j,temp;
	if(low<high){
		pivot=low;
		i=low;
		j=high;
		while(i<j){
			while(list[i]<=list[pivot] && i<=high)
				i++;
			while(list[j]>list[pivot] && j>=low)
				j--;
			if(i<j)
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
		temp=list[j];
		list[j]=list[pivot];
		list[pivot]=temp;
		quicksort(list,low,j-1);
		quicksort(list,j+1,high);
	}
}
int main(){
	int n;
	printf("Enter size of the array :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
