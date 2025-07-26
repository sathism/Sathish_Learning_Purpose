#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
   struct node *next;
   int data;
}node;

node * getNewNode(int data)
{
     node *newNode = NULL;
     newNode = (node *) malloc(sizeof(node));
     if(newNode)
     {
        newNode->data = data;
        newNode->next = NULL;
     }
     printf("Sathish");
     return newNode;
}
int insert(node *root, int data)
{
     node *ptr = root;
     node *temp;
     if(root  == NULL)
     {
         temp = getNewNode(data);
	 if(temp != NULL)
         {
             ptr->next = temp;
         }
         else
            return -1;
     } 
}
int main()
{
    node *head;
}
