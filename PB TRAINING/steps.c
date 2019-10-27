#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter number of steps :");
	scanf("%d",&n);
	long int b=1,a=1,c,x[n];
	x[0]=a;
	x[1]=b;
	for(int i=2;i<=n;i++){
		c=a+b;
		x[i]=c;
		a=b;
		b=c;
	}
	printf("Number of ways :%li",x[n]);
	return 0;
}
