class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] == target) {
                return true;
            }

            if (nums[l] == nums[mid] && nums[mid] == nums[h]) {
                // Move pointers inward when there are duplicates at both ends
                l++;
                h--;
            } else if (nums[l] <= nums[mid]) {
                if (nums[l] <= target && target < nums[mid]) {
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else {
                if (nums[mid] < target && target <= nums[h]) {
                    l = mid + 1;
                } else {
                    h = mid - 1;
                }
            }
        }

        return false;
    }
};
