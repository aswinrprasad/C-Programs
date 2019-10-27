#include <stdio.h>
#include <stdlib.h>

struct ret{
	int cnt;
	int ar[50];
	int flag;
};
int n;


struct ret find(int num,int *b){
	int j=0;
	struct ret obj;
	for(int i=0;i<n;i++)
	{
		if(*(b+i)==num)
		{
			obj.ar[j++]=i;
			obj.flag=1;
		}
	}
	obj.cnt=j;
	return obj;
}
int main(){
	int first;
	struct ret find(int num,int *b);
	printf("Enter size of the array :");
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	printf("Enter elements of the array :");
	for(int i=0;i<n;i++)
		scanf("%d",(a+i));
	while(1){
		printf("Enter elements to be searched for :(-1 to exit)");
		scanf("%d",&first);
		if(first==-1)
			exit(0);
		else{
			printf("Enter element %d is found at : ",first);
			struct ret obj1=find(first,a);
			if(obj1.flag==1){
				printf("Element %d found at positions : ",first);
				for(int i=0;i<obj1.cnt;i++)
					printf("%d,",obj1.ar[i]);
			}
			else{
				printf("\nObject not found.");
			}
		}
	}
	return 0;
}
