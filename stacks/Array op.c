#include<stdio.h>
#define n 5
int top=-1;
int stack[n];
void push()/*Add a seach mini and max and search in code */
{
        int x;
        printf("ENTER A VALUE");
        scanf("%d",&x);
        if(top==n-1)
             {
                printf("\nOverflow\n");
            
    }
        else
             {
                    top++;
                    stack[top]=x;
                
        }
    }
void pop()
{
        int item;
//underflow
        if(top==-1)
             {
                printf("underflow");
            
    }
        item=stack[top];
        top--;
        printf("\n%d\n",item);
}
//
void topp()
{
        if(top==-1)
             {
                printf("empty");
            
    }
        else
             {
                    printf("\n%d",stack[top]);
                
        }
    }
void display()
{
        for(int i=top; i>=0; i--)
             {
                printf("Array[%d] :%d",i,stack[i]);
            
    }
}/*
void update()
{
int num,val;
//get top
printf("ENTER TO UPDATE THE INDEX OF ARRAY ",top);
printf("ENTER the value");
scanf("%d",&num);
if(top>=n-1){
printf("overflow");
}
}*/
void search(int key, int stack[n])
{     printf("enter the elements to be search");
        scanf("%d",&key);

        for(int i=0; i<top; i++)
             {
                if(stack[n]==key)
                        printf("the position is %d and values %d",i,key);
            
    }
        if(stack[n]!=key)
             {
                printf("not elements found %d",key);
            
    }
}
void max_min()
{
        int max,mini;
        max=mini=stack[0];
        for(int i=0; i<top; i++)
             {

            
    }
}
int main()
{
        int ch,key;

        do {

                printf("Enter choice\n1.push \n 2.pop\n 3 top\n 4.display\n");
                scanf("%d",&ch);
                switch(ch)
                     {
                case 1:
                        push();
                        break;
                case 2:
                        pop();
                        break;
                case 3:
                        topp();
                        break;
                case 4:
                        display();
                        break;
                case 5:

                        search(key,stack[n]);

                        break;
                default:
                        printf("Enter a valid choice");
                    
        }
            
    }
        while(ch!=5);
        //printf("Hello world!");
        return 0;
}#include<stdio.h>
#define n 5
int top=-1;
int stack[n];
void push()/*Add a seach mini and max and search in code */
{
        int x;
        printf("ENTER A VALUE");
        scanf("%d",&x);
        if(top==n-1)
             {
                printf("\nOverflow\n");
            
    }
        else
             {
                    top++;
                    stack[top]=x;
                
        }
    }
void pop()
{
        int item;
//underflow
        if(top==-1)
             {
                printf("underflow");
            
    }
        item=stack[top];
        top--;
        printf("\n%d\n",item);
}
//
void topp()
{
        if(top==-1)
             {
                printf("empty");
            
    }
        else
             {
                    printf("\n%d",stack[top]);
                
        }
    }
void display()
{
        for(int i=top; i>=0; i--)
             {
                printf("Array[%d] :%d",i,stack[i]);
            
    }
}/*
void update()
{
int num,val;
//get top
printf("ENTER TO UPDATE THE INDEX OF ARRAY ",top);
printf("ENTER the value");
scanf("%d",&num);
if(top>=n-1){
printf("overflow");
}
}*/
void search(int key, int stack[n])
{     printf("enter the elements to be search");
        scanf("%d",&key);

        for(int i=0; i<top; i++)
             {
                if(stack[n]==key)
                        printf("the position is %d and values %d",i,key);
            
    }
        if(stack[n]!=key)
             {
                printf("not elements found %d",key);
            
    }
}
void max_min()
{
        int max,mini;
        max=mini=stack[0];
        for(int i=0; i<top; i++)
             {
        if(max<stack[i])
        {
            max=stack[i];
        }
        else if(mini>stack[i])
        {
            mini=stack[i];
        }
            
    }
    printf("max is%d ",max);
    printf("mini is %d",mini);
}


int main()
{
        int ch,key;

        do {

                printf("Enter choice\n1.push \n 2.pop\n 3 top\n 4.display\n6.max and mini \n");
                scanf("%d",&ch);
                switch(ch)
                     {
                case 1:
                        push();
                        break;
                case 2:
                        pop();
                        break;
                case 3:
                        topp();
                        break;
                case 4:
                        display();
                        break;
                case 5:

                        search(key,stack[n]);

                        break;
            case 6:
            max_min();
            break;
                default:
                        printf("Enter a valid choice");
                    
        }
            
    }
        while(ch!=7);
        //printf("Hello world!");
        return 0;
}
