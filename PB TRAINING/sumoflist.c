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
			last->ptr=newnode;
			last=newnode;
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
	printf("\n");
	temp=first;
	int sum=0;
	while(temp!=NULL)
	{
		sum+=temp -> data;
		temp=temp->ptr;
	}
	printf("The sum of elements of linked list is : %d",sum);
	return 0;
}
