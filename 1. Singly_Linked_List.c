#include<stdio.h>
#include<stdlib.h>

//creation of the structure of a node
struct Node
{
	int data;
	struct Node *link; 
};

//function to print the list along with its elements.
void printList(struct Node *head)
{
   struct Node *p = head; //creating a variable pointer and assigning it the address of first node stored inside the head.
   
   while(p!=NULL) //while loop to traverse along the list.
   {
   	  printf(" +---------------+\n");
   	  printf(" | ");
      printf("%d",p->data); //printing of data inside the node pointed by p.
	  printf(" | ");
	  printf("%.8d | ---> \n",p->link); // printing of address to the next node stored inside the address field of the Node pointed by p.
	  printf(" +---------------+\n");
	 
	  p = p->link; // traversing to next node.	
   }
}

//Entering elements into the list manually.
void main()
{
    struct Node *head = NULL;
	struct Node *first = (struct Node*)malloc(sizeof(struct Node*)); //allocating memory to the fist node.
	first -> data = 10; //allocating data to the first node that has to be stored inside it. 
	
	struct Node *second = (struct Node*)malloc(sizeof(struct Node*));//allocating memory to the 2nd node
	second -> data = 20; //allocating data to the second node that has to be stored inside it.
	
	struct Node *third = (struct Node*)malloc(sizeof(struct Node*));//allocating memory to 3rd node.
	third -> data = 30; //allocating data to the 3rd node that has to be stored inside it.
	
	head = first; //storing address of the first node in the variable "head".
	first -> link = second; //allocating address field of 1st node with the address of 2nd node.
	second -> link = third; //allocating address field of 2nd node with the address of 3rd node.
	third -> link = NULL; //allocating address field of 3rd node with NULL as there are no more upcoming nodes.
	
	printList(head); //printing the list using "printList" function.
}
