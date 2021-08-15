/*
Summary: Bubble sort is a simple sorting algorithm that works by repeatedly stepping through the list to be sorted, comparing each pair of adjacent items and swapping them if they are in the wrong order.
Complexity - O(n^2)
*/

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

void main()
{
	int array[MAXSIZE];
	int i, j, num, temp;
FILE *file1;  
   FILE *file2; 

	printf("Enter the value of num \n");
	scanf("%d", &num);

	printf("Before sorting the elements are \n");
	for (i = 0; i < num; i++)
	{
		array[i]=rand()%100;/*initialize the random 
function under 100 num*/
	}
for (i = 0; i < num; i++)
	{
printf(" element %d is : %d\n",i,array[i]);		
	}
/*file handling */
file1=fopen("UNSORTED.txt","w");   /* use of fopen ehich open 
files and name is unsorted.txt and w =write if r is read */
  fprintf(file1,"\n Unsorted element number\n"); 
for (i = 0; i < num; i++)
	{
fprintf(file1,"%d\n",*(prt+i)); 
//printf(" element %d is : %d\n",i,ptr[i]);		
	}


   /*   Bubble sorting begins */
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < (num - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	
	printf("Sorted array is...\n");
	for (i = 0; i < num; i++)
	{
		printf("element %d is :%d\n",i, array[i]);
	}

file2=fopen("SORTED.txt","w");   //opens the file 
  fprintf(file2,"\n sorted element number\n");     //fprint the elements   
   for ( i = 1; i < a+1; i++) 
    {        
 fprintf(file2,"%d\n",*(prt+i)); /*fprint is used to 
Printing the file and output in file */ 
    }         
 fclose(file1);   //close the file 
  fclose(file2);  //close the file 
	
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
