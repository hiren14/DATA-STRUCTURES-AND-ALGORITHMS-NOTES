
#include<stdio.h>
#define n 5
int top = -1;
int stack[n];
void push ()
/*Add a seach mini and max and search in code */
{   int x;
    printf ("ENTER A VALUE : ");
    scanf ("%d", &x);
    if (top == n - 1)
    {
        printf ("\nOverflow\n");
    }
    else {
        top++;
        stack[top] = x;
    }
}
void pop ()
{   int item; //underflow
    if (top == -1)
    {
        printf ("\nunderflow\n");
    }
    item = stack[top];
    top--;
    printf ("\n%d\n", item);
} //
void topp ()
{   if (top == -1)
    {
        printf ("\nempty\n");
    }
    else {
        printf ("\n%d", stack[top]);
    }
}
void display ()
{   for (int i = 0; i<=top; i++)
    {
        printf ("\nArray[%d] :%d\n", i, stack[i]);
    }
}
/*                  void update()                  {
int num,val;                  //get top
printf("ENTER TO UPDATE THE INDEX OF ARRAY ",top);
 printf("ENTER the value");
                 scanf("%d",&num);
                 if(top>=n-1)
{                  printf("overflow");
                 }                  } */
void search (int key, int stack[n])
{   printf ("\nenter the elements to be search\n");
    scanf ("%d", &key);
    for (int i = 0; i < top; i++)
    {   if (stack[n] == key)
            printf ("\nthe position is %d and values %d", i, key);
    }
    if (stack[n] != key)
    {
        printf ("not elements found %d", key);
    }
}
void max_min ()
{   int max, mini;
    max = mini = stack[0];
    for (int i = 0; i <= top; i++)
        {    if(max<stack[i])
                    max=stack[i];
        
    if(mini>stack[i] )
        
            mini=stack[i];
        
    }
    printf("\nmax value  in array is %d\n",max);
    printf("\nminimum  value  in array  is %d\n",mini);
}

void reverse()
{   for (int i = top; i >= 0; i--)
    {
        printf ("\nArray[%d] :%d\n", i, stack[i]);
    }
}
int main ()
{   int ch, key;
    do {
        printf ("Enter choice\n1.push \n 2.pop\n 3 top\n 4.display\n\n 6.max and mininvalue \n 
7. Reverse\n");
        scanf ("%d", &ch);
        switch (ch)     {
        case 1:
            push ();
            break;
        case 2:
            pop ();

            break;
        case 3:
            topp ();
            break;
        case 4:
            display ();
            break;

        case 5:
            search (key, stack[n]);

            break;
        case 6:
            max_min ();
            break;
            case 7: reverse();
            break;
            case 8:
            break; 
        default:
            printf ("Enter a valid choice");
        }
    }
    while (ch != 7);             //printf("Hello world!");
    return 0;
}
