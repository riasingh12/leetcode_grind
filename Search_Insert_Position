class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int high=nums.size()-1;
    int low=0;
    int mid=(low+high)/2;
    if(nums.size()==0) return 0;
            while(low<=high)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target<nums[mid])
            {
                high=mid-1;
            }
            else if(target>nums[mid])
            {
                low=mid+1;
            }
            mid=(low+high)/2;
        }
        mid=(nums[mid]>target)?mid:mid+1;
        return mid;
    }
};
