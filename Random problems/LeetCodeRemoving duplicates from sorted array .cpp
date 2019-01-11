class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        
        int a = nums[0], j = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != a)
            {
                nums[j] = a;
                j++;
            }
                a = nums[i];
        }
        nums[j] = a;
        j++;
        return j;
        
    }
};
