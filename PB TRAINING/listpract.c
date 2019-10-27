#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *first,*last,*newNode;

int main(){
    int n;
    first=NULL;
    printf("Enter the number of nodes in the list :");
    scanf("%d",&n);
    printf("Enter node elements :");
    for(int i=0;i<n;i++){
        newNode=(struct node*)malloc(sizeof(struct node*));
        scanf("%d",&newNode->data);
        if(first==NULL)
            first=last=newNode;
        else{
            last->next=newNode;
            last=newNode;
        }
    }
    last->next=NULL;
    struct node *temp;
    temp=first;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}