#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int t=nums1Size+nums2Size;
    int final[nums1Size+nums2Size];
    if(nums1Size>=nums2Size)
    {
        n=nums1Size;
    }
    else if(nums2Size>nums1Size)
    {
        n=nums2Size;
    }
        for (int i=0;i<n;i++)
        {
            final[i]=nums1[i];
            final[n+i]=nums2[i];
        }
    return final;
}

int main()
{
    int nums1Size;
    scanf("%d", &nums1Size);
    int nums1[nums1Size];
    for (int i = 0; i < nums1Size; i++)
    {
        scanf("%d", &nums1[i]);
    }

    int nums2Size;
    scanf("%d", &nums2Size);
    int nums2[nums2Size];
    for (int i = 0; i < nums2Size; i++)
    {
        scanf("%d", &nums2[i]);
    }


    printf("Enter target 1,2\n");
    int target1, target2;
    scanf("%d%d",&target1,&target2);
	int p=void merge(int* nums1, int nums1Size, int target1, int* nums2, int nums2Size, int target2)