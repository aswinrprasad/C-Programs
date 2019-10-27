#include <stdlib.h>
#include <stdio.h>

struct node {
	int data;
	struct node *ptr;
};

int main(){
	struct node *first, *last, *newnode;
	int n;
	first=NULL;
	printf("Enter how many elements to be insterted :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter data : ");
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode -> data);
		if(first==NULL)
			first=last=newnode;
		else{
			newnode->ptr=first;
			first=newnode;
		}
	}
	last->ptr=NULL;
	struct node *temp;
	temp=first;
	while(temp!=NULL)
	{
		printf("%d ->",temp -> data);
		temp=temp->ptr;
	} 
	return 0;
}
