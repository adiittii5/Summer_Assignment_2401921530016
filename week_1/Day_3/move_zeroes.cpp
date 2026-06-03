class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int pas=0;
    for (int i =0;i< nums.size(); i++)
    {
        if(nums[i]!=0)
        {
            int temp=nums[pas];
            nums[pas]= nums[i];
            nums[i]= temp;
            pas++;
        }
    }
        
    }
};