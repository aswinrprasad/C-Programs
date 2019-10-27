#include <stdio.h>
#include <stdlib.h>

int s[20],top=-1,n;
void push(int x){
	if(top==n)
		printf("Overflow!");
	else{
	top+=1;
	s[top]=x;
	}
}
void pop(){
	if(top==-1)
		printf("Underflow!");
	else
		top-=1;
}
int main(){
	int ch,ele,max;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&ch);
		switch(ch){
			case 1: scanf("%d",&ele);
					push(ele);
					break;
			case 2: pop();
					break;
			case 3: max=s[0];
					if(top==-1)
						printf("No elements in stack!");
					for(int i=0;i<=top;i++){
						if(s[i]>max)
							max=s[i];
					}
					printf("%d",max);
					break;
			default:printf("\nInvalid choice!");
					
		}
	}
}
