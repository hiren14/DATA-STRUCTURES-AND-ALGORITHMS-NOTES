#include <stdio.h>
#include <stdlib.h>
//Compiler version gcc  6.3.0
struct node{
 int data;
  struct node *next;
}*rear,*new,*temp,*front;/*
struct node rear=NULL;
struct node front=NULL;
struct node *new;
struct node *temp;*/
void enqueue()
{
  int element;
 new= (struct node *)malloc(1*sizeof(struct node));
printf("enter the elements ");
scanf("%d",&element);
new->data=element;
new->next=NULL;
if(rear==NULL)
{
  front=new;
  rear=new;
  
}
else{
  rear->next=new;
  rear=new;
}

}
void dequeue()
{
  if(front==NULL)
  {
    printf("\n the queue is empty\n");
  
  
  }
  else{
    temp=front;
    front=front->next;
    
    temp->next=NULL;
    free(temp);
  }
}
void display()
{
  temp=front;
  if(temp==NULL)
  {
    printf("\nqueue is empty\n");
  }
  else 
  {
   while(temp!=NULL)
   {
     printf("%d",temp->data);
     temp=temp->next;
   }
  }
}
int main()
{
  int choice;
   while(choice!=4)
  {printf("\n*************************Main Menu*****************************\n");
  printf("\n=================================================================\n");
  printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
  printf("\nEnter your choice ?");  
    scanf("%d",&choice);
    switch(choice){
  case 1:
    enqueue();
    break;
    case 2:
      dequeue();
      break;
      case 3:
        display();
        break;
        }
        }
  return 0;
}
