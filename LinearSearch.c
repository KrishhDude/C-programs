#include<stdio.h>
void main()
{
	int ar[] = {1, 3, 2, 5, 10};
	int len = sizeof(ar)/sizeof(ar[0]);
	int key = 5, found = 0;
	for(int i=0; i<len; i++)
	{
		if(ar[i] == key) 	
		{
			printf("The element was found at position %d", i);
			found++;
			break;
		}
	}
	if(!found)
		printf("The element was not found in the array");
}