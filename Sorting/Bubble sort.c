/*
Summary: Bubble sort is a simple sorting algorithm that works by repeatedly stepping through the list to be sorted, comparing each pair of adjacent items and swapping them if they are in the wrong order.
Complexity - O(n^2)
*/

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

void main()
{
int *ptr=NULL;
int i, j, num, temp;

printf("Enter the value of num \n");
scanf("%d", &num);
ptr=(int*)malloc(num*sizeof(int));

printf("Before sorting the elements are \n");
for (i = 0; i < num; i++)
{
ptr[i]=rand()%100;
}
for (i = 0; i < num; i++)
{
printf(" element %d is : %d\n",i,ptr[i]);
}

   /*   Bubble sorting begins */
for (i = 0; i < num; i++)
{
for (j = 0; j < (num - i - 1); j++)
{
if (ptr[j] > ptr[j + 1])
{
temp = ptr[j];
ptr[j] = ptr[j + 1];
ptr[j + 1] = temp;
}
}
}

printf("Sorted array is...\n");
for (i = 0; i < num; i++)
{
printf("element %d is :%d\n",i, ptr[i]);
}

}

/*
Input: Enter the value of num
6

23
45
67
89
12
34
*/
