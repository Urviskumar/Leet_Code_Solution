class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int size = nums.size();
        int pos_count=0;
        int neg_count=0;
        int result =0;
        for( int i =0; i< size ; i++){
            if(nums[i]>0){
                pos_count++;
                    
            }
            else if(nums[i]<0) {
                neg_count++;
            }
        }
            result = max(neg_count, pos_count);
            return result;

    }
};
