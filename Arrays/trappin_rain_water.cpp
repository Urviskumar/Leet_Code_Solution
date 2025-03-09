// trappin_rain water
#include<vector>
#include<iostream>

using namespace std;

class Solution {
    public:
        int trap(vector<int>& height) {
            int sizeA;
            sizeA = height.size();
            vector<int> left_max(sizeA);
            vector<int> right_max(sizeA);
            int result = 0;
            left_max[0] = height[0];
            right_max[sizeA-1] = height[sizeA-1];
    
    
            for( int i = 1; i< sizeA; i++){
                left_max[i] = max(left_max[i-1], height[i]);        
        }
    
           for( int j = sizeA-2; j>=0; j--){
                right_max[j] = max(right_max[j+1], height[j]);        
        }
    
            for( int i =0; i<sizeA ; i++){
                result = result + (min(left_max[i], right_max[i]) - height[i]);
            }
        return result;
        }
    };