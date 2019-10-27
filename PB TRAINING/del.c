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
	struct node *temp,*temp1,*prev;
	temp=first;
	printf("\nThe linked list is : ");
	while(temp!=NULL)
	{
		printf("%d ->",temp -> data);
		temp=temp->ptr;
	}
	printf("\n\n");
	temp=first;
	int cnt=1,key;
	printf("Enter at which position you want to delete : ");
	scanf("%d",&key);
	while(temp!=NULL)
	{
		cnt++;
		prev=temp;
		temp=temp->ptr;
		temp1=temp->ptr;
		if(cnt==key){
			prev->ptr=temp1;
			break;
		}
	}
	temp=first;
	printf("\nThe linked list is : ");
	while(temp!=NULL)
	{
		printf("%d ->",temp -> data);
		temp=temp->ptr;
	}
	return 0;
}
