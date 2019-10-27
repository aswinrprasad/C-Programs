#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main(){
	int r,c;
	static int k,b;
	printf("Enter row size size of the array :");
	scanf("%d",&r);
	printf("Enter column size of the array :");
	scanf("%d",&c);
	printf("Enter the array :\n");
	int **a=(int **)malloc(sizeof(int *));
	for(int i=0;i<r;i++){
		*(a+i)=(int *)malloc(c*sizeof(int));
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){ 
			scanf("%d",(*(a+i)+j));
		}
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(*(*(a+i)+j)==0){
				k=i;
				b=j;
			}
		}
	}

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(k==i){
				*(*(a+i)+j)=0;
			}
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(b==j){
				*(*(a+i)+j)=0;
			}
		}
	}
	printf("The changed matrix is :\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){ 
			printf("%d ",*(*(a+i)+j));
		}
		printf("\n");
	}
	return 0;
}
