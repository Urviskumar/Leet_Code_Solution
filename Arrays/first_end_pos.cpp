//find first and last element in sorted array

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1; 
        vector<int> temp; 

        bool foundlow = false; 
        bool foundhigh = false; 

        while (low <= high) {
          
            if (!foundlow && nums[low] == target) { 
                foundlow = true; 
            }
            if (!foundhigh && nums[high] == target) { 
                foundhigh = true; 
            }

            if (foundlow && foundhigh) {
            temp.push_back(low);
            temp.push_back(high);
                break;
            }

            if (!foundlow) {
                low++;
            }
            if (!foundhigh) {
                high--;
            }
        }

        if (temp.empty()) { return {-1,-1};}
        return temp;
    }
};

