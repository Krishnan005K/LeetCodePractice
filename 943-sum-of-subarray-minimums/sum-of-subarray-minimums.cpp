class Solution {

    vector<int> findNse(vector<int>& nums) {
        int n=nums.size();
        vector<int>nge(n);
        stack<int> st;
        for(int i=(n)-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>nums[i]){
                st.pop();
            }
            nge[i]=st.empty() ? n:st.top();
            st.push(i);
        }
        return nge;
    }
    vector<int> findPse(vector<int>& nums) {
        int n=nums.size();
        vector<int>nge(n,-1);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }
            nge[i]=st.empty() ? -1:st.top();
          
            st.push(i);
        }
        return nge;
    }
public:
    int mod=1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> nse=findNse(arr);
        vector<int> pse=findPse(arr);
        int s=0;
        for(int i=0;i<n;i++){
            int l=i-pse[i];
            int r=nse[i]-i;
            s=(s+(r*l*1LL*arr[i])%mod)%mod;
        }
        return s;
    }
};