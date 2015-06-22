
#include <stdio.h>

struct node {
	int value;
	struct node *next;
};

typedef struct node Node;

Node *head;
Node *tail;

void insert(int);
int fetch(int);
int main(int argc, char *argv[]) {
	int choice;
	int value;
	int index;
	while(1) {
		printf("What do you want to do?\n\n");
		printf("1. Insert \n2. Fetch \n3. Exit \n");
		scanf("%d", &choice);

		switch(choice) {
			case 1:
				printf("\nEnter the value you want to insert!\n");
				scanf("%d", &value);
				//need to actually insert the value
				printf("\nInserted the value %d into linkedList\n", value);
				break;
			case 2:
				printf("\nValue at what index you want to fetch\n");
				scanf("%d", &index);
				printf("\nValue at index %d is 10\n", index); //need to fetch real value
				break;
			case 3:
				printf("\nExiting...\n");
				return 0;
			default:
				break;
		}
	}
}

void insert(int value) {
    Node newNode
    newNode.value = value;
    if(head == null) {
        head = &newNode;
        tail = &newNode;
    }
    else{
        (*tail).next = &newNode;
        tail = &newnode;
    }

}
int fetch(int index)
{
    if(head == null){
        return -1;
   }
   Node element = *head;
   for(i=0;i<index;i++){
        if(element.next == Null){
            return -1;
        }
       element = *(element.next);
    }
    return element.value;
}
