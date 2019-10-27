#include <stdio.h>
#include <stdlib.h>	

int main(){
	int n,o=0;
	printf("Enter size of hollow diamond :");
	scanf("%d",&n);
	for(int i=0;i<2*n-1;i++){
		for(int j=0; j<2*n-1;j++){
			if(i+j == n-1 || j-i == n-1 || i+j == 3*n-3 || i-j== n-1 ){
				for(int k=n-1;k>=0;k--){
					if(k+o<2*n-1||i==2*n-1){
						printf("*");
						o+=2;
					}
				}
				o=0;
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
