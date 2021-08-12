#include<stdio.h>
#define n 5
int top=-1;
int stack[n];
void push()
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
}
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
}

int main()
{
    int ch;

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
            break;
        default:
            printf("Enter a valid choice");
        }
    }
    while(ch!=5);
    //printf("Hello world!");
    return 0;
}
