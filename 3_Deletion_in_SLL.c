#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}Node;

//function to delete the node at a given position.
void Deletionatposx(Node **head)
{
	int position;
	Node *p = *head;
	Node *q = NULL;
	int count = 1;
	
	printf("Enter Position of Deletion : ");
	scanf("%d",&position);
	
	while(p!=NULL) //for traversing the list to find the given node's position in the Linked List.
	{
		if(count == position)
		   break;
		
		q = p;
		p = p->next;
		count++;
	}
	
	if(p==NULL)
	{
		printf("Enter a valid position.\n");
	}
	else if(q == NULL) //It means that the node to be deleted is the starting of the list.
	{
		printf("Node at the position %d is deleted successfully.\n",position);
		*head = p->next;
		p->next = NULL;
		free(p);
	}
	else
	{
		printf("Node at the position %d is deleted successfully.\n",position);
		q->next = p->next;
		p->next = NULL;
		free(p);
	}
}

//function to print the data in the list.
void printList(Node **head)
{
	Node *p = *head;
	while(p)
	{
		printf("%d --> ",p->data);
		p = p->next;
	}
}

void main()
{
	Node *head = NULL;
	Node *first = (Node*)malloc(sizeof(Node*));
	first -> data = 20;
	
	Node *second = (Node*)malloc(sizeof(Node*));
	second -> data = 30;
	
	Node *third = (Node*)malloc(sizeof(Node*));
	third -> data = 40;
	
	Node *fourth = (Node*)malloc(sizeof(Node*));
	fourth -> data = 50;
	
	Node *fifth = (Node*)malloc (sizeof(Node*));
	fifth -> data = 60;
	
	head = first;
	first -> next = second;
	second -> next = third;
	third -> next = fourth;
	fourth -> next = fifth;
	fifth -> next = NULL;
	
	Deletionatposx(&head);
	printList(&head);
}
