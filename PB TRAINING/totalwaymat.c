#include <stdio.h>

int totalways(int cr,int cc,int r,int c){
	if(cr>r || cc > c)
		return 0;
	if(cr==r && cc==c)
		return 1;
	return totalways(cr,cc+1,r,c)+totalways(cr+1,cc,r,c);
}
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",totalways(0,0,m-1,n-1));
	return 0;
}
