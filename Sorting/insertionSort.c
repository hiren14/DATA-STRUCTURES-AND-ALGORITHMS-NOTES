#include<stdio.h>
#include <stdlib.h>/*
void insertionSort(int *ptr, int num)
{

    int i, key, j;

    for (i = 1; i < num; i++)

    {

        key =ptr[i];

        j = i - 1;

;
        /* Move elements of arr[0..i-1], that are

        greater than key, to one position ahead

        of their current position */

       /* while (j >= 0 && ptr+j > key)

        {

            ptr[j + 1] = ptr[j];

            j = j - 1;

        }

        ptr[j + 1] = key;

    }
    for (i = 1; i < num; i++)
    {
    printf("%d",ptr[i]);}
}*/
int main()
{
    
    int *ptr=NULL;
    int i, j, num, temp,key;
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
    //printf("Hello world!");

    //insertionSort(*ptr,num);

    

    for (i = 1; i < num; i++)

    {

        key =ptr[i];

        j = i - 1;

;
        /* Move elements of arr[0..i-1], that are

        greater than key, to one position ahead

        of their current position */

        while (j >= 0 && ptr[j] > key)

        {

            ptr[j + 1] = ptr[j];

            j = j - 1;

        }

        ptr[j + 1] = key;

    }
  printf("AFTER sorting the elements are \n");
 
    for (i = 0; i < num; i++)
    {
        printf(" element %d is : %d\n",i,ptr[i]);
    }
      return 0;
}
