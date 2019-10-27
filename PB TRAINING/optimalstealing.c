#include <stdio.h>
#include <stdlib.h>	
int max(int x,int y){
	if(x>y)
		return x;
	else
		return y;
}

int steal(int house[],int n,int i){ 
	if(i>=n)
		return 0;
	int ans1=house[i]+steal(house,n,i+2);
	int ans2=steal(house,n,i+1);
	return max(ans1,ans2);
}

int main(){
	int n;
	printf("Enter the no of houses :");
	scanf("%d",&n);
	int a[n];
	printf("Enter money in each house :");
	for(int i=0 ; i<n;i++)
		scanf("%d",&a[i]);
	printf("Maximum the theif can steal is : %d",steal(a,n,0));
	return 0;   
}
