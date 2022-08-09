#include<stdio.h>
#include<stdlib.h> //stdlib library is a must to use malloc key word to allocate memory dynamically.

//creation of node Structure
struct Node
{
	int data;
	struct Node *next;
};

//function to print Linked List
void printList(struct Node **head)
{
	struct Node *p = *head;
	printf("%d ----> ",&head);
	while(p!=NULL)
	{
		printf("%d | %d ----> ",p->data,p->next);
		p = p->next;
	}
	printf("\n\n");
}

//function to insert Node at the beginning of the linked list.
void insertNodeatBeg(struct Node **head,int datum)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = datum;
	temp -> next = *head;
	*head = temp;
}

//function to insert Node at the end of the linked list
void insertNodeatEnd(struct Node **head,int datum)
{
	struct Node *p = *head;
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = datum;
	temp -> next = NULL;
	
	if(p!= NULL)
	{
		while(p->next!=NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}
	else
	{
		printf("There is no List yet.");
		 p = temp;
	}
}

//function to insert node at a specified position.
void insertatposx(struct Node **head,int pos,int datum)
{
	int count = 1;
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
	
	struct Node *p = *head;
	while(p!=NULL)
	{
		if(count == pos)
		{
			break;
		}
		p = p->next;
		count++;
	}
	
	if(p==NULL)
	{
		printf("Invalid Position.");
	}
	else
	{
		temp -> data = datum;
		temp->next = p->next;
		p->next = temp;
	}
}

//main function
void main()
{
	struct Node *head = NULL;
	
	struct Node *first = (struct Node*)malloc(sizeof(struct Node));
	first -> data = 23;
	
	struct Node *second = (struct Node*)malloc(sizeof(struct Node));
	second -> data = 56;
	
	head = first;
	first -> next = second;
	second -> next = NULL;
	
    
	printList(&head);
	insertNodeatBeg(&head,27);
	printList(&head);
	insertNodeatBeg(&head,41);
	printList(&head);
	insertNodeatEnd(&head,42);
	printList(&head);
	insertatposx(&head,3,25);
	printList(&head);	
}

