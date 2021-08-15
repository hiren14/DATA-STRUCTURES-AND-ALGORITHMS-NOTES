
#include<stdio.h>
#define n 5
int top = -1;
int stack[n];
void push ()
/*Add a seach mini and max and search in code */
{

    int x,pos,new,choice;
    printf("\n1. At beginning position \n 2. for last position\n 3. for specific positions");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
        if (top == n - 1)
        {
            printf ("\nOverflow\n");
        }
      //  printf("enter the new element");
       // scanf("%d",new);
        //array declaration
else{
        printf ("ENTER A VALUE : ");
          scanf ("%d", &x);
        /* at first */
      //error  
       for(int i=n; i>=0; i--)
        {
            stack[i]=stack[i-1];
        }
        stack[0]=x;
        top++;}
        break;
    }
  
case 3:
    {
        /* if (top == -1)
         {
             printf ("\nunderflow\n");
         }
         */
        if (top == n - 1)
        {
            printf ("\nOverflow\n");
        }
     else{
   printf("Enter the position ");
        scanf("%d",&pos);
        printf("enter the new element");
        scanf("%d",&new);
        //array declaration
        // printf ("ENTER A VALUE : ");
        //   scanf ("%d", &x);
        /* at first */
        for(int i=n; i>pos; i--)
        {
            stack[i+1]=stack[i];

        }
        stack[pos]=new;
}
        break;
    }
    // at last
case 2: { //array declaration
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
        break;
    }

}
}



void pop ()

/* working properly */
{

    int item,pos,choice; //underflow
    if (top == -1)
    {
        printf ("\nunderflow\n");
    }
    //at last
   else
printf("\n 1. for beginning \n2. for specific positions\n 3. for last position\n");
    scanf("%d",&choice);

    switch(choice) {
    case 2:
        printf("Enter the position ");
        scanf("%d",&pos);
        for(int i=pos; i<=n; i++)
        {
            stack[i]=stack[i+1];

        }
        top--;
        display();
        break;
    case 3:

        item = stack[top];
        top--;
        printf ("\n%d\n", item);
        break;
    }case 1:
 {
    //printf("Enter the position ");
       // scanf("%d",&pos);
    pos=0;
        for(int i=pos; i<=n; i++)
        {
            stack[i]=stack[i+1];
        }
        top--;
        break;
        
}}}
//
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
/*void update()                  {
int num,val;                  //get top
printf("ENTER TO UPDATE THE INDEX OF ARRAY ",top);
printf("ENTER the value");
scanf("%d",&num);
if(top>=n-1)
{                  printf("overflow");
}

      } */

void update()
{
    int num,val;
    // get the update index value
    printf("Enter uodate index in range from 0 to %d, \n Enter your Index = ",top);
    scanf("%d",&num);
    if(num<0 || num>top)
    {
        printf("Enter update index in range of 0 to %d",top);
    }
    else
    {
        printf("\nEnter new value = ");
        scanf("%d",&val);
        stack[num]=val;
    }
    display();
}
void search ()
{
    int key;
    printf ("\nenter the elements to be search\n");
    scanf ("%d", &key);
    for (int i = 0; i < top; i++)
    {   if (stack[i] == key)
            printf ("\nthe position is %d and values %d", i, key);

        else// (stack[i] != key)
        {
            printf ("not elements found %d", key);
        }
    }
}
void max_min ()
{   int max, mini;
    max = mini = stack[0];
    for (int i = 0; i <= top; i++)
    {   if(max<stack[i])
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
{   int ch;
    do {
        printf ("Enter choice\n1.PUSH \n 2.POP \n 3 TOP \n 4.DISPLAY \n5. SEARCH \n 6.max and mininvalue \n 7. Reverse\n");
        //printf ("Enter choice\n1.push \n 2.pop\n 3 top\n 4.display\n");
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
            search ();

            break;
        case 6:
            max_min ();
            break;
        case 7:
            reverse();
            break;
        case 8:
            update();
            break;
        case 9:
            break;
        default:
            printf ("Enter a valid choice");
        }
    }
    while (ch != 9);             //printf("Hello world!");
    return 0;
}
