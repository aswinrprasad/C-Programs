#include <stdio.h>
#include <stdlib.h>

int n;

int main(){
	printf("Enter size of the array :");
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	int *b=(int *)malloc(n*sizeof(int));
	printf("Enter elements of the original array :");
	for(int i=0;i<n;i++){
		scanf("%d",(a+i));
		if(*(a+i)>=n){
			printf("Element value cannot be bigger than! Please enter another element :");
			i--;
		}
	}
	for(int i=0;i<n;i++)
		*(b+(*(a+i)))=i;
	
	printf("The swapped array is : "); 
	for(int i=0;i<n;i++)
		printf("%d ",*(b+i));
	
	return 0;
}
