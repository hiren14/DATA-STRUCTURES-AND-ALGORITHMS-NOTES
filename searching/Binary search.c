// Binary Search in C

#include<stdio.h>
#include<stdlib.h>
#define Max 1000

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[],int low,int high) {
    int pivot=arr[high]; /* selected last elements a */ int i=(low-1);
    for(int j=low; j<=high-1; j++) {
        /* if current elements is smaer than n or equal to pivot */ if(arr[j]<=pivot) {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}
void quicksort(int a[],int l,int r) {
    if(l<r) {
        int q;
        q=partition(a,l,r);
        quicksort(a,l,q-1);
        quicksort(a,q+1,r);
    }
}

int binarySearch(int arr[], int key, int low, int high) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If found at mid, then return it
        if (arr[mid] == key)
            return mid;

        // Search the left half
        if (arr[mid] > key)
            return binarySearch(arr, key, low, mid - 1);

        // Search the right half
        return binarySearch(arr, key, mid + 1, high);
    }

    return -1;
}

int main(void) {

    int arr[Max],num,key;
    printf("enter the element");
    scanf("%d",&num);//random array declaration
    for(int i=0; i<num; i++)
    {
        arr[i]=rand()%100000;
    }
    printf("unsorted array");
    printf("\n**************************************\n");
    for(int i=0; i<num; i++) {
        printf("%d\n",arr[i]);//=rand()%100;
    }
    quicksort(arr, 0, num-1);
    printf("Sorted array: \n");
    printf("\n**************************************\n");
    for(int i=0; i<num; i++) {
        printf("%d\n",arr[i]);
//=rand()%100; 
}
// int array[] = {3, 4, 5, 6, 7, 8, 9};
        //int n = sizeof(array) / sizeof(array[0]);
        //int x = 4;
        printf("\nenter the element\n");
        scanf("%d",&key);//random array declaration


        int result = binarySearch(arr, key, 0, num - 1);
        if (result == -1)
            printf("\nNot found\n");
        else
            printf("\nElement is found at index %d\n", result);
    }
    
