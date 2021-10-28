
#include <stdio.h>
#include <stdlib.h>
//Compiler version gcc  6.3.0

/* creating a struct node */
  struct node{
    int data;
    struct node *next;
  }*new,*top,*temp;
  //struct node *head;
  void push()
  {
    int element;
    printf("e terter element ");
    scanf("%d",&element);
   new = (struct node*)malloc(sizeof(struct node));   
    if(new==NULL)  
      {
        printf("\nthe node is empty\n");
        new->data=element;
        new->next=NULL;
        top=new;
        
      }
            else 
            {
             new->data=element;
             new->next=top;
             top=new;
                /*checking if head is empty*/
                  
           printf("the item is pushed ");
            }
  
  }
  
  
  void pop()
  {
    int item;
    
    if(top==NULL)
    {
      printf("\n stack is empty \n");
    }
    else
    {
     temp=top;
     top=top->next;
      temp->next=NULL;
      
      free(temp);
      printf("\n item poped ");
    }
    
  }
  /* to display the stack using linkedlist   */
    void display()
    {
      int i;
      /* checking for ptr empty"*/
        if(top==NULL)
      {
        printf("stack is empty");
        
      }
      /* printing all elements*/
        else
        {
          temp=top;
          printf("\nprinting all elements\n");
          while(temp!=NULL)
          {
            printf("%d\n",temp->data);
            
            temp=temp->next;
          }
        }
    }
int main()
{
  int choice=0;
  while(choice!=4)
  {printf("\n*************************Main Menu*****************************\n");
  printf("\n=================================================================\n");
  printf("\n1.insert an element [push]\n2.Delete an element[pop]\n3.Display the queue\n4.Exit\n");
  printf("\nEnter your choice ?");  
    scanf("%d",&choice);
    switch(choice){
    case 1:
      push();
      break;
      
      case 2:
        pop();
        break;
        case 3:
          display();
          break;
        case 4: 
          exit(0);
          break;}
  }
  //printf("Hello, World!");
  return 0;
}
