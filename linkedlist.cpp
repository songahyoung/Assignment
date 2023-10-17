#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node* next;

}node;

node* head = NULL;

void insert_node_front(int data)
{ 
	node* new_node;
	new_node = (node*) malloc(sizeof(node));
	new_node->value = data;
	new_node->next = NULL;

	if (head == NULL)
	{
		head = new_node;
		return;
	}

	new_node->next = head;
	head = new_node;
}


int main()
{
	int data;

	while (1)
	{
		scanf_s("%d",&data);

		insert_node_front(data);

	}

	return 0;
}