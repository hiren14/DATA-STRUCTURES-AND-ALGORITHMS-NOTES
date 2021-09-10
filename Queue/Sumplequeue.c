// Queue implementation in C

#include <stdio.h>
#define SIZE 5

void enQueue();
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main() {
    //deQueue is not possible on empty queue

    int choice;
    while(choice != 4)
    {
        printf("\n*************************Main Menu*****************************\n");
        printf("\n=================================================================\n");
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\nEnter your choice ?");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: enQueue();
            break;
        case 2: deQueue();
            break;
        case 3: display();
            break;
        case 4: exit (0);
            break;
        default:
            printf ("\nEnter valid choice??\n");
        }
    }

/*

deQueue();

//enQueue 5 elements
enQueue(1);
enQueue(2);
enQueue(3);
enQueue(4);
enQueue(5);

// 6th element can't be added to because the queue is full
enQueue(6);

display();

//deQueue removes element entered first i.e. 1
deQueue();

//Now we have just 4 elements
display();
*/
return 0;
}

void enQueue(int value) {
int item;
printf ("\nEnter the element\n");
scanf ("\n%d", &item);


 if (rear == SIZE - 1)
        printf("\nQueue is Full!!");
    else if (front == -1)
        front = 0;
    rear++;
    items[rear] = item;
    printf("\nInserted -> %d", value);
}


void deQueue() {
    if (front == -1)
        printf("\nQueue is Empty!!");
    else {
        printf("\nDeleted : %d", items[front]);
        front++;
        if (front > rear)
            front = rear = -1;
    }
}

// Function to print the queue
void display() {
    if (rear == -1)
        printf("\nQueue is Empty!!!");
    else {
        int i;
        printf("\nQueue elements are:\n");
        for (i = front; i <= rear; i++)
            printf("%d  ", items[i]);
    }
    printf("\n");
}
