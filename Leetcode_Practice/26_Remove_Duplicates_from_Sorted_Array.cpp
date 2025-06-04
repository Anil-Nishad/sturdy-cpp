class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;
        vector<int> a;
        int k = 1;
        a.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                a.push_back(nums[i]);
                k++;
            }
        }

        for (int i = 0; i < a.size(); i++) {
            nums[i] = a[i];
        }

        // Assign back the unique elements to nums (not in-place by strict
        // standards)
        // nums.assign(a.begin(), a.end());
        return k;
    }
};

// or

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int k = 1; // Index of the next unique element

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k; // First k elements are the unique ones
    }
};
