// class Solution {
// public:
//     int subarraySum(vector<int>& arr, int k) {
//         int n=arr.size();
//         int cnt=0;
//         for (int i = 0 ; i < n; i++) { // starting index i
//             int sum = 0;
//         for (int j = i; j < n; j++) { // ending index j

//             // calculate the sum of subarray [i...j]
//                 sum += arr[j];

//             // Increase the count if sum == k:
//             if (sum == k)
//                 cnt++;
//         }
//     }
//     return cnt;
// }
    
// };
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int sum = 0;
        int c = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                c += mp[sum-k];
            }
            mp[sum]++;
        }
        return c;
    }
};