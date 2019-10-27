#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct btnode {
	struct btnode *l;
	struct btnode *r;
	int value;
};
struct btnode *temp,*root;
int sum1,a[50];
void create(){
	int data;
	scanf("%d",&data);
	temp=(struct btnode *)malloc(sizeof(struct btnode));
	temp->value=data;
	temp->l=temp->r=NULL;
}

void insert(){
	void search(struct btnode *t);
	create();
	if(root==NULL)
		root=temp;
	else
		search(root);
}

void search(struct btnode *t){
	if((temp->value > t->value) && (t->r!=NULL))
		search(t->r);
	else if((temp->value > t->value) && (t->r==NULL))
		t->r=temp;
	else if((temp->value < t->value) && (t->l!=NULL))
		search(t->l);
	else if((temp->value < t->value) && (t->l==NULL))
		t->l=temp;
}

void inorder(struct btnode *t){
	if(root==NULL)
	{
		printf("No elements in tree!\n");
		return;
	}
	if(t->l!=NULL)
		inorder(t->l);
	printf("%d->",t->value);
	if(t->r!=NULL)
		inorder(t->r);
}


void preorder(struct btnode *t){
	if(root==NULL)
	{
		printf("No elements in tree!\n");
		return;
	}
	printf("%d->",t->value);
	if(t->l!=NULL)
		preorder(t->l);
	if(t->r!=NULL)
		preorder(t->r);
}


void postorder(struct btnode *t){
	if(root==NULL)
	{
		printf("No elements in tree!\n");
		return;
	}
	if(t->l!=NULL)
		postorder(t->l);
	if(t->r!=NULL)
		postorder(t->r);
	printf("%d->",t->value);
}
void sum(struct btnode *t){
	if(root==NULL)
	{
		printf("No elements in tree!\n");
		return;
	}
	if(t->l!=NULL)
		sum(t->l);
	sum1+=t->value;
	if(t->r!=NULL)
		sum(t->r);
}

int height(struct btnode *t){
	int lh,rh;
	if(t==NULL)
		return 0;
	else{
		lh=height(t->l);
		rh=height(t->r);

		if(lh>rh)
			return (lh+1);
		else
			return (rh+1);
	}
}
int lh1,rh1;
int breadth(struct btnode *t){

	if(t==NULL)
		return 0;
	else{
		lh1=height(t->l);
		rh1=height(t->r);

		if(lh1>rh1)
			return (lh1+1);
		else
			return (rh1+1);
	}
}

void topl(struct btnode *t){

	if(t==NULL)
		return;
	if(t->l!=NULL){
		printf("%d ",t->value);
		topl(t->l);
	}
	if(t->l==NULL)
		printf("%d ",t->value);
}
void topr(struct btnode *t){

	if(t==NULL)
		return;
	if(t->r!=NULL){
		if(t!=root)
			printf("%d ",t->value);
		topr(t->r);
	}
	if(t->r==NULL)
		printf("%d ",t->value);
}

void printlevel(struct btnode *t,int level){
	if(t==NULL)
	{
		return;
	}
	if(level==1)
		printf("%d ",t->value);
	else if(level >1)
	{
		printlevel(t->l,level-1);
		printlevel(t->r,level-1);
	}
}

void levelorder(struct btnode *t){
	int height(struct btnode *t);
	int h=height(t);
	for(int i=1;i<=h;i++){
		printf("\n");
		printlevel(t,i);
	}
}


int p=0;
void sval(struct btnode *t){

	if(root==NULL)
	{
		printf("No elements in tree!\n");
		return;
	}
	if(t->l!=NULL)
		sval(t->l);
	a[p++]=t->value;
	if(t->r!=NULL)
		sval(t->r);
}

int main(){
	
	int ch,n;
	while(1){
		printf("1.Insert to Tree\n");
		printf("2.Display Inorder\n");
		printf("3.Display Preorder\n");
		printf("4.Display Postorder\n");
		printf("5.Display Sum\n");
		printf("6.Display Height\n");
		printf("7.Find largest and smallest\n");
		printf("8.Display Level Order\n");
		printf("9.Breadth of the tree\n");
		printf("10.Display Top View of Tree\n");
		printf("11.Exit\n\nEnter Your Choice :");
		scanf("%d",&ch);
		switch(ch){
			case 1: printf("Enter size of tree : ");
					scanf("%d",&n);
					printf("Enter values to insert: ");
					for(int i=0;i<n;i++)
						insert();
					break;
			case 2: printf("Inorder :");
					inorder(root);
					printf("\n\n");
					break;
			case 3: printf("Preorder :");
					preorder(root);
					printf("\n\n");
					break;
			case 4: printf("Postorder :");
					postorder(root);
					printf("\n\n");
					break;
			case 5: printf("The sum is :");
					sum1=0;
					sum(root);
					printf(" %d",sum1);
					printf("\n\n");
					break;
			case 6: printf("Height is : %d",height(root)-1);
					printf("\n\n");
					break;
			case 7: printf("The smallest element in the tree is : ");
					sval(root);
					printf("%d\n",a[0]);
					printf("The largest element in the tree is : %d\n",a[p-1]);
					break;
			case 8: printf("Level Order : ");
					levelorder(root);
					printf("\n\n");
					break;
			case 9: breadth(root);
					printf("Breadth of tree : %d",lh1+rh1);
					printf("\n\n");
					break;
			case 10:printf("Top View: ");
					topl(root);
					topr(root);
					printf("\n\n");
					break;
			case 11:printf("Exiting..");
					printf("\n\n");
					exit(0);
			default:printf("Invalid choice!");
					printf("\n\n");
					
		}
	}
	return 0;
}
