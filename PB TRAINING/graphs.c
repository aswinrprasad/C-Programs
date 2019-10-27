#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct List
{
    struct node *head;
};
struct Graph
{
    int v;
    struct List *array;
};
struct node* create(int dest)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=dest;
    newNode->next=NULL;
    return newNode;
}

struct Graph* createGraph(int nodes)
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct node));
    graph->v=nodes;
    graph->array=(struct List*)malloc(nodes *sizeof(struct List));
    int i;
    for(i=0;i<nodes;i++)
        graph->array[i].head=NULL;
    return graph;
}

void addEdge(struct Graph* graph, int src, int dest)
{
    struct node* newNode = create(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head=newNode;

    newNode= create(src);
    newNode->next=graph->array[dest].head;
    graph->array[dest].head=newNode;
}

void printGraph(struct Graph* graph)
{
    int i;
    for(i=0;i<graph->v;++i)
    {
        struct node* p = graph->array[i].head;
        printf("\n Adjacency list of vertex %d\n\n Head --- ",i);
        while(p!=NULL)
        {
            printf("%d-> ",p->data);
            p=p->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int nodes,s,d,choice=1;
    printf("Enter the number of nodes\n");
    scanf("%d",&nodes);
    struct Graph* graph = createGraph(nodes);
    while(choice)
    {
        scanf("%d %d", &s, &d);
        addEdge(graph,s,d);
        printf("\nDo you want to continue?? press 1\n");
        scanf("%d",&choice);
    }
    printGraph(graph);
    return 0;
}
