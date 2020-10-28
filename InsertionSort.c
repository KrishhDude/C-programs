#include<stdio.h>
void printArray(int ar[], int n)
{
	for(int i=0; i<n; i++)
		printf("%d ",ar[i]);
}
void InsertionSort(int ar[], int n)
{
	int i, j, temp;
	for(i=1; i<n; i++)
	{
		temp = ar[i];
		j = i-1;
		while(j>=0 && ar[j]>temp)
		{
			ar[j+1] = ar[j];
			j--;
		}
		ar[j+1] = temp;
	}
}
void main()
{
	int ar[] = {1, 3, 2, 5, 4};
	int n = sizeof(ar)/sizeof(ar[0]);
	printf("The unsorted array is:\n");
	printArray(ar, n);
	InsertionSort(ar, n);
	printf("\nThe sorted array is:\n");
	printArray(ar, n);
	
}
