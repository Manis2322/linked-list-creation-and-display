#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;
};
void printList(struct node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}
 
int main(){
	int item1,item2,item3;
	printf("enter the data for head node :");
	scanf("%d",&item1);
	printf("enter the data for first node :");
	scanf("%d",&item2);
	printf("enter the data for last node :");
	scanf("%d",&item3);
	
	struct node* head=NULL;
	struct node* firstnode=NULL;
	struct node* lastnode=NULL;
	
	head=(struct node*)malloc(sizeof(struct node));
	firstnode=(struct node*)malloc(sizeof(struct node));
	lastnode=(struct node*)malloc(sizeof(struct node));
	
	head->data=item1;
	head->next=firstnode;

	firstnode->data=item2;
	firstnode->next=lastnode;
	
	lastnode->data=item3;
	lastnode->next=NULL;
	
	printList(head);
	
	return 0;
}


