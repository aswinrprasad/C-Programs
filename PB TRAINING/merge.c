#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define MAX_SIZE 20
struct List 
{
    int element;
    struct List *next;
};
typedef struct List* LIST;
LIST init() {
    LIST list = (LIST) malloc(sizeof(struct List));
    list->next = NULL;
}
void insert(LIST list, int n, int index) {
    LIST node = init();
    node->element = n;
    int i;
    for (i = 0; i < index && list != NULL; i++) {
        list = list->next;
    }
    node->next = list->next;
    list->next = node;
}
void print(LIST list) {
    list = list->next;
    while (list != NULL) {
        printf("%d ", list->element);
        list = list->next;
    }
    printf("\n");
}
LIST merge(LIST l1, LIST l2)
{
    struct List *head1, *head2, *temp1, *temp2, *temp3;
    LIST l3;
    head1=l1->next;
    head2=l2->next;
    temp1=head1;
    temp2=head2;
    int i=0;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->element >= temp2->element){
            insert(l3,temp2->element,i);
            i+=1;
            insert(l3,temp1->element,i);
            i+=1;
        }
        else{
            insert(l3,temp1->element,i);
            i+=1;
            insert(l3,temp2->element,i);
            i+=1;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return l3;
}
int main() {
    int n, m;
    int x, i;
    char command[10];
    LIST l1;
	LIST l2;
	LIST l3;
    scanf("%d %d", &m, &n);
    l1 = init();
	l2 = init();
    for (i = 0; i < m; i++) {
		scanf("%d", &x);
		insert(l1, x, i);
    }
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		insert(l2, x, i);
    }
	l3 = merge(l1, l2);
	print(l3);
    return 0;
}
