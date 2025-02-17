class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int cnt=0;
        for (int i = 0 ; i < n; i++) { // starting index i
            int sum = 0;
        for (int j = i; j < n; j++) { // ending index j

            // calculate the sum of subarray [i...j]
                sum += arr[j];

            // Increase the count if sum == k:
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}
    
};