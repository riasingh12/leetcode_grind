#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{    
    int li=0, hi=numsSize;
    int sum=nums[li]+nums[hi];
    int temp[2];
  while (sum!= target) 
  {
    if (sum < target) 
    {
      ++li;
    } 
    else if(sum> target)
    {
      --hi;
    }
    else
    {
        temp[0]=li;
        temp[1]=hi;
        return *temp;
    }
  }
}

int main()
{
    int numsSize;
    scanf("%d", &numsSize);
    int arr[numsSize];
    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    int n = sizeof(arr)/sizeof(arr[0]); 
	quickSort(arr, 0, numsSize-1);

    printf("Enter target\n");
    int target;
    scanf("%d",&target);
	int p=int* twoSum(int* arr, int numsSize, int target, int* n)
  return p;
}

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
	int midvot = arr[high];
	int i = (low - 1);
	for (int j = low; j <= high- 1; j++) 
	{ 
		if (arr[j] < midvot) 
		{ 
			i++;
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int mid = partition(arr, low, high); 
		quickSort(arr, low, mid - 1); 
		quickSort(arr, mid + 1, high); 
	} 
} 
