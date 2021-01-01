#include <stdio.h>



int removeDuplicates(int* nums, int numsSize)
{
    int i;
    int j=1;
    if(numsSize==0)
    {return 0;}
    else if(numsSize==0)
    {return 1;}
    else{
   for (i =0;i<numsSize-1;i++)
   {
       if(nums[i]!=nums[i+1])
       {
           nums[j]=nums[i+1];
           j++;
       }
   }
    return j;
}}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int p;
    p = removeDuplicates(arr, n); 
    for (i = 0; i < p; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}