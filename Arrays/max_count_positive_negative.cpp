class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int size = nums.size();
            vector<int> result(2);
            bool res=false;
            int i=0;
            int j=0;
            for( i =0; i< size; i++){
                for( j=1; j<size ; j++){
            if(i!=j && nums[j]+nums[i]==target){
                    result[0]=i;
                    result[1]=j;
                    res= true;
                }
            }
            if(res==true){break;}
            }
            return result;
    
        }
    };