#include <stdio.h>
#include <stdlib.h>
/*
  Write a program to implement following operations on the doubly linked list.
✅(a) Insert a node at the front of the linked list.
✅(b) Insert a node at the end of the linked list.
✅(c) Delete a last node of the linked list.
✅(d) Delete a node before specified position.
  */
//Compiler version gcc  6.3.0 
struct node 
{
  struct node *prev;
  struct node *next;
int data;

};
struct node *head;
void insertion_beg()
{
  struct node *ptr;
  int item;
  ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
  printf("\nOVERFLOW");
}
else
{
  printf("\nENTER ITEM VALUE");
  scanf("%d",&item);
  if(head==NULL){
    ptr->next=NULL;
    ptr->prev=NULL;
    ptr->data=item;
    head=ptr;
  }
  else{
    ptr->data=item;
  
    ptr->prev=NULL;
    ptr->next=head;
    ptr->prev=ptr;
    head=ptr;
  }
  printf("\n node insertion_beg ");
}
    }
    void insertion_last()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
       printf("\nEnter value");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
          }  
             
       }  
     printf("\nnode inserted\n");  
    }  
    
    
      
      
  
    void display()
{
  struct node *ptr;
  printf("\n printing values...\n");  
    ptr=head;  
   while(ptr!=NULL)
   {
     printf("%d\n",ptr->data);
     ptr=ptr->next;
   }
}
 void delete_beg()
{
 struct node *ptr;
 if(head==NULL)
 {
   printf("\nOVERFLOW");
   
 }
 else if(head->next==NULL)
 {
   head=NULL ;
   free(head);
   printf ("\n node Delete ");
 }
 else
 {
   ptr=head;
   head=head->next;
   head->prev=NULL;
   free(ptr);
   printf ("\n node Delete ");
 }
}



  void deletion_last()
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW\n");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nNode Deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != NULL)  
        {  
             ptr -> next;   
        }  
        ptr ->prev->next= NULL;   
        free(ptr);  
        printf("\nNode Deleted\n");  
    }  
}  
  
  
void deletion_sp_before()  
{ 
        struct node *ptr, *temp;   
       int val;       
       printf("Enter the value"); 
            scanf("%d",&val);     
             temp = head;    
               while(temp -> data != val)    
                 temp = temp -> next;    
                   if(temp -> next == NULL)  
                       {          printf("\nCan't delete\n");  
                           }      else if(temp -> next -> next == NULL)
                                 {          temp ->next = NULL; 
                                          printf("\nNode Deleted\n");      }   
                                             else      {        
                                                  ptr = temp -> next;    
                                                        temp -> next = ptr -> next;     
                                                             ptr -> next -> prev = temp;  
                                                                     free(ptr);        
                                                                       printf("\nNode Deleted\n");    
    
int main()
{           int choice=0;

    while(choice != 9)  
    {  
  printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3. Delete a last node of the linked list.\n\t4. Delete a node before specified position.\n\t \n5. display ()\n \t 6. EXIT\n");  
        printf("\nEnter your choice?\n");
          scanf("%d",&choice);
          switch (choice)
          {
            case 1:
              insertion_beg();
              break;
              case 2:
                
                insertion_last();
                break;
                /*case 3:
                  insertion_at_sep();
                  break;*/
                 case 3:
                 deletion_last();
                 break;
                 case 4:
                   deletion_sp_before();
                   
                
                   break;
                   
                  case 5:
                    display();
                    break;
          case 6:
            exit(0);
            break;
            default:
              printf("\n invalid choice enter a valid choice");
          
          
          }
    }
 // printf("Hello, World!");
  return 0;
}
