#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,j=-1;
	printf("Enter the size :");
	scanf("%d",&n);
	char a[n][100];
	for(int i=0;i<=n;i++){
		while(a[i][j]!=' '){
			scanf("%c",&a[i][++j]);
		}
	}
	
	for(int i=0;i<=n;i++){
		for(int j=0;a[i][j]!='\0';j++)
			printf("%c ",a[i][j]);
	}
	return 0;
}
