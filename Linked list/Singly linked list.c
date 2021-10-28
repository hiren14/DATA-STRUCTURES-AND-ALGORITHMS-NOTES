/*Write a menu driven program to implement following operations on the singly linked list.
✅(a) Insert a node at the front of the linked list.
✅(b) Insert a node at the end of the linked list.
(c) Insert a node such that linked list is in ascending order.(according to info. Field)
✅(d) Delete a first node of the linked list.
✅(e) Delete a node before specified position.
✅(f) Delete a node after specified position*/
#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0
  struct node{
    int data;
    struct node *next;
  };
  struct node *start = NULL;
void traverse()
{  
    struct node *ptr;  
    ptr = start;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}     



/* FUNCTION to insert at first in list */
  
  void insert_fornt()
  
 {  
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next =start;  
        start = ptr;  
        printf("\nNode inserted");  
    }  
   }
   /*insertion at end */
     
   void insert_at_end()
      {
        struct node *ptr,*temp;  
    int item;     
    ptr = (struct node*)malloc(sizeof(struct node));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(start == NULL)  
        {  
            ptr -> next = NULL;  
            start = ptr;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp = start;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted");  
          
        }  
    }  
}
  //printf("Hello, World!");
  /* FUNCTION to be instead at any position */
    void insert_at_pos()
    {
     struct node *temp, *newnode;
     int pos,data1,i=1;
    newnode =(struct node*)malloc (sizeof (struct node));

         printf("enterd the position \n and data\n");
        scanf("%d %d",&pos,&data1);
          temp->data = start;
          newnode -> data=data1;
          while(i < pos -1)
          {
            temp = temp->next;
         i++;
          }
    }
    
    void delete_at_first()
    {  
    struct node *ptr;  
    if(start == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = start;  
        start= ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining ...\n");  
    }  
}  
    
    
      void delete_at_end()
    
    
    {  
    struct node *ptr,*ptr1;  
    if(start== NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(start-> next == NULL)  
    {  
        start= NULL;  
        free(start);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
          
    else  
    {  
        ptr = start;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last ...\n");  
    }     
}  
      void delete_at_pos_after()
      {
         struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=start;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  
}  
     void insert_as()
     {
       struct node *ptr,*temp;
    //struct node *temp ;
    temp=(struct node *)malloc(sizeof(struct node));
   data=temp->data;
    temp->next = NULL;
    
    if(start==NULL){
        // this section runs if linked list is empty
        // we simply set start to temp
        start = temp;    
    }
    else if(temp->data <= start->data){
        // this section runs if the new data is smaller then
        // the first dataue in the linked list
        // we simple insert temp at the beginning of the linked list
        temp->next = start;
        start = temp;
    }
    else{
        // we are iterating each element of the linked list
        // to find the node whose dataue is just smaller than data
        ptr = start;
        while(ptr->next!=NULL&&ptr->next->data<temp->data){
            ptr = ptr->next;
        }
        // ptr now points to the node whose dataue is just less than data
        // we simply insert temp between ptr and ptr->next
        temp->next = ptr->next;
        ptr->next = temp;
    }
    
    return start;
    
}

      /*void max()
      {
        
      }*/
        
         void delete_before()
      {
         struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node before which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=start;  
    for(i=0;i<loc-1;i++)  
    {  
      
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }
    }
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  
}
      int main()
      {
        int choice=0;
      while(choice!=8){
      printf("\n\t1  To see list\n"); 
      printf("\t2  For insertion at first\n");
      printf("\t3  For insertion at end \n");
      printf("\t 4 for insertion  in ascending order\n ");
      
       printf("\t5  For deletion of at first\n ");
         printf("\t6  For deletion of last node\n ");
   
   printf("\t7  For deletion of at any pos \n");
 //printf("\t9 Delete a node before specified position.\n");
  printf("\t8 exit \n");
   printf("\nenter your choice \n");
   scanf("%d",&choice);
   
   
   switch(choice)
   {
     case 1: traverse();
     break ;
     case 2: insert_fornt();
     break;
     case 3: insert_at_end();
     
     break; 
     case 5: delete_at_first();
     break;
     case 6: delete_at_end();
     break;
     case 7: delete_at_pos_after();
     break;
     case 4:delete_before();
     break;
     case 8:insert_as();
     break;
     case 9: exit(0);
     break;
     default: printf("enter a vaild choice ");
   }
   }
   return 0;
    }

