#include <stdio.h>
#include <stdlib.h>
/*Write a program to implement following operations on the circular linked list.
✅(a) Insert a node at the end 
of the linked list.
✅(b) Insert a node before specified position.
✅(c) Delete a first node of 
the linked list.
✅(d) Delete a node after 
specified position.*/
//Compiler version gcc  6.3.0
struct node  
{  
    int data;  
    struct node *next;  
  
};  
struct node *head, *x, *y, *z;  
void insertion_at_end()
{
  struct node *ptr,*temp,*next;
  int item;
  ptr=(struct node*)malloc (sizeof (struct node));

if(ptr==NULL)

{
  printf("\n overflow ");
  
}
else
{
  printf("\n enter data ");
  scanf("%d",&item);
  ptr->data=item;
  if(head==NULL)
  {
    head=ptr;
    head=ptr->next;
    
  }
  else
  {
  temp=head;
    while(temp->next!=head)  
    {
      temp=temp->next;
    }
 temp->next=ptr;
  ptr->next=head;
  }
  printf("\n node inserted \n");
}
}
void delete_beg()
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW\n");      
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nNode Deleted\n");   
    }  
      
    else  
    {     
        ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nNode Deleted\n");   
    }  
}  
void del_at_pos()  

{  
    if (head == NULL)  
        printf("\n List is empty");  
    else  
    {  
        int c = 1, pos;  
        printf("\n Enter the position to be deleted:");  
        scanf("%d", &pos);  
        x = head;  
        while (c < pos+1)  
        {  
            y = x;  
            x = x->next;  
            c++;  
        }  
        y->next = x->next;  
        free(x);  
    }  
}
void ins_at_pos()  
{  
    struct node *ptr;  
    int c = 1, pos, count = 1;  
   
    y = (struct node*)malloc(sizeof(struct node));  
    if (head == NULL)  
    {  
        printf("cannot enter an element at this place");  
    }  
    printf("\n Enter the data for particular position:");  
    scanf("%d", &y->data);  
    printf("\n Enter the position to be inserted:");  
    scanf("%d", &pos);  
    x =head;  
    ptr =head;  
    while (ptr->next !=head)  
    {  
        count++;  
        ptr = ptr->next;  
    }  
    count++;  
    if (pos > count)  
    {  
        printf("OUT OF BOUND");  
        return;  
    }  
    while (c < pos-1)  
    {  
        z = x;  
        x = x->next;  
        c++;  
    }  
    y->next = x;  
    z->next = y;  
}    
void display(){  
    struct node *current = head;  
    if(head == NULL){  
        printf("List is empty");  
    }  
    else{  
        printf("Nodes of the circular linked list: \n");  
         do{  
             //Prints each node by incrementing pointer.  
            printf("%d ", current->data);  
            current = current->next;  
        }while(current != head);  
        printf("\n");  
    }  
}  

   
void beg_insert()    
{    
        
    struct node *ptr = (struct node *)malloc(sizeof(struct node));    
    struct node *temp;  
  int item;
    printf("\nEnter the item which you want to insert?\n");  
        scanf("%d",&item);  
    if(ptr == NULL)    
    {    
        printf("\nOVERFLOW");    
    }    
    else     
    {    
        ptr -> data = item;    
        if(head == NULL)    
        {    
            head = ptr;    
            ptr -> next = head;    
        }    
        else     
        {       
            temp = head;    
            while(temp->next != head)    
                temp = temp->next;    
            ptr->next = head;     
            temp -> next = ptr;     
            head = ptr;    
        }     
    printf("\nNode Inserted\n");  
    }    
                
}    
      
int main()
{    int choice=0;

    while(choice != 9)  
    {  
  printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n\t 3. insertion at before specific  \n4. Delete a first node of the linked list.\n\t5. Delete a node after specified position.\n\t \n6. display ()\n \t 6. EXIT\n");  
        printf("\nEnter your choice?\n");
          scanf("%d",&choice);
          switch (choice)
          {
            case 1:
              beg_insert();
            break;
            case 2:
              insertion_at_end();
              break;
              case 3:
                
                ins_at_pos();
                break;
                /*case 3:
                  insertion_at_sep();
                  break;*/
                 case 4:
               
                 delete_beg();
                 break;
                 case 5:
                   del_at_pos();
                   
                
                   break;
                   
                  case 6:
                    display();
                    break;
          case 7:
            exit(0);
            break;
            default:
              printf("\n invalid choice enter a valid choice");
    }
    }      
          
  return 0;
}
