#include<stdio.h>
void printArray(int ar[], int n)
{
	for(int i=0; i<n; i++)
		printf("%d ",ar[i]);
}
void swap( int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void SelectionSort(int ar[], int n)
{
	int i, j, min;
	for(i=0; i<n-1; i++)
	{
		min = i;
		for(j=i+1; j<n; j++)
		{
			if(ar[j] < ar[min])
			{
				min = j;
			}
		}
		if(min != i)
		{
			swap(&ar[i], &ar[min]);
		}
	}
}	
void main()
{
	int ar[] = {1, 3, 2, 5, 4};
	int n = sizeof(ar)/sizeof(ar[0]);
	printf("The unsorted array is:\n");
	printArray(ar, n);
	SelectionSort(ar, n);
	printf("\nThe sorted array is:\n");
	printArray(ar, n);
	
}