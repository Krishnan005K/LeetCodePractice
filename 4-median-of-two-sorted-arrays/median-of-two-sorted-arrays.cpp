class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int n=a+b;
        if(n%2==0){
            return (nums1[n/2-1]+nums1[n/2])/2.0;
        }
        else{
            return nums1[n/2];
        }
        return 0.0;
        
    }
};