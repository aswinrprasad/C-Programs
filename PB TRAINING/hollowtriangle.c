#include <stdio.h>
#include <stdlib.h>	

int main(){
	int n;
	printf("Enter size of hollow diamond :");
	scanf("%d",&n);
	for(int i=0;i<2*n-1;i++){
		for(int j=0; j<2*n-1;j++){
			if(i+j == n-1 || j-i == n-1 || i==n-1 )
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
