#include<stdio.h>

#include<stdlib.h>
#define Max 10
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int low,int high)

{
    int pivot=arr[high];
    /* selected last elements a
    */
    int i=(low-1);

    for(int j=low; j<=high-1; j++)
    {
        /* if current elements
         is smaer than n or equal to pivot */

        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quicksort(int a[],int l ,int r)
        {          
        if(l<r)
        {
        int q;
        q=partition(a ,l,r);
        
        quicksort(a,l,q-1);
        quicksort(a,q+1,r);
        }
             
             }


int main()
{
    int arr[Max],num;
    printf("enter the element");
    scanf("%d",&num);
//random  array declaration
    for(int i=0; i<num; i++)

    {
        arr[i]=rand()%100;

    }
    printf("unsorted array");
     printf("/n**************************************");
   
    for(int i=0; i<num; i++)

    {
        printf("%d\n",arr[i]);//=rand()%100;

    }
    quicksort(arr, 0, num-1);
    printf("Sorted array: \n");
     printf("/n**************************************");
   
for(int i=0; i<num; i++)

    {
        printf("%d\n",arr[i]);//=rand()%100;

    }
    
    printf("Hello world!");
    return 0;
}
