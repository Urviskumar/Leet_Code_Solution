class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int size = nums1.size();
        double  med=0.0;
        int index=0;
        if(size%2==0){
            index = size/2;
            med = (nums1[index-1] + nums1[index])/2.0;
        }
        else{
            med=nums1[size/2];
        }

        return med;
        
    }
};
