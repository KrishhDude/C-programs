#include<stdio.h>
void main()
{
	int ar[] = {1, 3, 6, 9, 10, 13, 21};
	int len = sizeof(ar)/sizeof(ar[0]);
	int found = 0, key = 10;
	int mid, low = 0, high = len-1;
	while(low <=high)
	{
		mid = (low + high)/2;
		if(key < ar[mid])
			high = mid-1;
		else if(key > ar[mid])
			low = mid+1;
		else if(key == ar[mid])
		{
			printf("The element was found at position %d", mid);
			found++;
			break;
		}
	}
	if(!found)
		printf("The element was not found");
}