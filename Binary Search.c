#include<stdio.h>
int main()
{
	int n, a[20], e, i, mid, min = 0, max,f=0;
	printf("Enter the array size less than 20\n");
	scanf("%d", &n); //Input array size from User
	printf("Enter the SORTED array\n");
	for (i = 0;i < n;i++) //Input SORTED array from User
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be searched\n");
	scanf("%d", &e); //Input element to be searched from User
	max = n; //Initialize max to the largest element in the array
	mid = (min + max) / 2; //definition of middle element to assign 1st mid
	for (i = 0;i < n;i++)
	{
		if (a[i] == e)
		{
			f = 1;
			break;
		}
		else
			f = 0;
	}
	if (f == 1)
	{
		while (a[mid] != e)
		{
			mid = (min + max) / 2; //definition of middle element to assign mid repeatedly
			if (e > a[mid])
			{
				min = mid; //set mid value to min if e>element at midth position
			}
			else
			{
				max = mid;//set mid value to max if e<element at midth position
			}
		}
		printf("Element is found at %dth position\n",(mid+1));
	}
	else
		printf("Element to be searched is absent in the array\n");
return 0;
}

