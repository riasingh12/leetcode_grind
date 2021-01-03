

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
 
    int copyarr[numsSize];int i,j;
    for (i=0;i<numsSize;i++)
    {
        copyarr[i]=nums[i];
    }
    int temp;
    for (i = 0; i < numsSize-1; i++)       
    {
       for (j = 0; j < numsSize-i-1; j++)  
       {   if (nums[j] > nums[j+1]) 
           { temp= nums[j];
             nums[j]=nums[j+1];
             nums[j+1]=temp;
           }
       }
    }
    
    int li=0, hi=numsSize-1;
    int *op= malloc(sizeof(int) * 2);
    int sum=nums[li]+nums[hi];
    do {
     sum=nums[li]+nums[hi];
        if (sum < target) 
            ++li;
        else if(sum> target)
            --hi;
        else
        {
            
            for(i=0;i<numsSize;i++)
            {
                 if(nums[li]==copyarr[i])
                 {op[0]=i;}
                if(nums[hi]==copyarr[numsSize-i-1])
                {op[1]=numsSize-i-1;}
            }
            *returnSize=2;
            return op;
        }
    }while (sum!= target);
    
return NULL;
}



