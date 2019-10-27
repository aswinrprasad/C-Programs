#include <stdio.h>
#include <malloc.h>
#include <math.h>
int main(){
	int n;
	printf("Enter element :");
	scanf("%d",&n);
	char c[10]=char*(n);
	printf("%s",c);
	return 0;
}
