class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for(int i = 0; i < nums1.size(); ++i) {
            for(int j = 0; j < nums2.size(); ++j) {
                if (nums1[i] == nums2[j]) {
                    if (!isPresent(result, nums1[i])) {
                        result.push_back(nums1[i]);
                    }
                    break; // Stop checking firther if a match is found
                }
            }
        }
        return result;
    }

    bool isPresent(const vector<int>& result, int value) {
        for (int num : result) {
            if (num == value) {
                return true;
            }
        }
        return false;
    }
};

//or



class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());  // Store elements of nums1
        unordered_set<int> resultSet;

        for (int num : nums2) {
            if (set1.find(num) != set1.end()) {
                resultSet.insert(num);  // Only unique elements go here
            }
        }

        return vector<int>(resultSet.begin(), resultSet.end());
    }
};
