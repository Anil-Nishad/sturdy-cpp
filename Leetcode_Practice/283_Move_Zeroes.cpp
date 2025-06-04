class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0 ;

        // Move Non-zero elements to the beginning
        for(int j =0; j < nums.size(); ++j)
        {
            if(nums[j] != 0)
            {
                nums[i++] = nums[j];
            }
        }
        //fill the rest of the array with zeroes
        for(int k = i ; k <nums.size(); ++k)
        {
            nums[k] = 0;
        }
    }
};