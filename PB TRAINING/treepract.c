#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct btnode{
    int val;
    struct btnode *l,*r;
};

struct btnode *temp,*root;

void create(){
    int data;
    scanf("%d",&data);
    temp=(struct btnode*)malloc(sizeof(struct btnode*));
    temp->val=data;
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
    if((temp->val < t->val) && (t->l!=NULL))
        search(t->l);
    else if((temp->val < t->val)&&(t->l==NULL))
        t->l=temp;
    else if((temp->val > t->val)&&(t->r!=NULL))
        search(t->r);
    else if((temp->val > t->val)&&(t->r==NULL))
        t->r=temp;
}

void inorder(struct btnode *t){
    if(root==NULL){
        printf("The tree is empty.");
        return;
    }
    if(t->l!=NULL)
        inorder(t->l);
    printf("%d->",t->val);
    if(t->r!=NULL)
        inorder(t->r);
}

void preorder(struct btnode *t){
    if(root==NULL){
        printf("The tree is empty.");
        return;
    }

    printf("%d->",t->val);
    if(t->l!=NULL)
        preorder(t->l);
    if(t->r!=NULL)
        preorder(t->r);
}

void postorder(struct btnode *t){
    if(root==NULL){
        printf("The tree is empty.");
        return;
    }

    if(t->l!=NULL)
        postorder(t->l);
    if(t->r!=NULL)
        postorder(t->r);
    printf("%d->",t->val);
}

int main(){
    int ch,n;
	while(1){
		printf("1.Insert to Tree\n");
		printf("2.Display Inorder\n");
		printf("3.Display Preorder\n");
		printf("4.Display Postorder\n");
        printf("5.Exit\n");
        printf("Enter a choice :");
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
            case 5: printf("Exiting ..");
                    exit(0);
            default:printf("Invalid Case!");
        }
    }
    return 0;
}