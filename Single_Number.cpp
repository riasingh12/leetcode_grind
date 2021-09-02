class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int xornum=0;
    for(int i=0;i<nums.size();i++)
        xornum = xornum^nums[i];
    return xornum;
    }
};
