#include<stdio.h>
#include<stdlib.h>

int linearsearch(int arr[], int num, int key) 

{
int i; 
for (i = 0; i < num; i++) 

if (arr[i] == key)
{
printf("the elements is found at %d pos %d element",i,key)
} 
return -1; 
}

int main()
{
int arr[25],num,key;
printf("ENTER THE ELEMENTS YOU WANT ");
   
    scanf("%d",&num);
    
    for(int i=0;i<=num;i++)
    {
    arr[i]=rand()%100;
    
    }
    for(int i=0;i<=num;i++)
    {
    printf("%d\n",arr[i]);
    
    }
    scanf("%d",&key);
    linearsearch(arr,  num, key); 

    
    // printf("Hello world!");
    return 0;
}
