#include<stdio.h>
int partition(int ar, int lb, int ub)
{
	int start = lb, end = ub;
	int pivot = ar[start];
	while(start < end)
	{
		while(ar[start] <= pivot)
		{
			start++;
		}
		while(ar[end] >= pivot)
		{
			end--;
		}
		if(start < end)
		{
			swap(&ar[start], &ar[end]);
		}
	}
	swap(&ar[lb], &ar[end])
	return end;
}
void quickSort(int ar, int lb, int ub)
{
	if(lb<ub)
	{
		int loc = partition(ar, lb, ub);
		quickSort(ar, lb, loc-1);
		quickSort(ar, loc+1, ub);
	}
}
void main()
{
	int ar[] = {1, 3, 2, 5, 4};
	int ub = 5, lb = 0;
	quicksort