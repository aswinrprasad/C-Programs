#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main(){
	int n,temp;
	printf("Enter size of the array :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",(a+i));
	}
	int j=n-1,i=0;
	while(i<j){
			if((*(a+i)==1) && (*(a+j)==0)){
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
				i++;
				j--;
			}
			else if((*(a+i)==0) && (*(a+j)==1)){
				i++;
				j--;
			}
			else if((*(a+i)==1) && (*(a+j)==1)){
				j--;
			}
			else if((*(a+i)==0) && (*(a+j)==0))
			{
				i++;
			}
		}
	for(int i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
}
