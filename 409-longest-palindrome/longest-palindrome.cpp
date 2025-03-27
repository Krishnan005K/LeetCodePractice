class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>map;
        bool flag=false;
        int count=0;
        for(auto &c:s)
        {
            map[c]++;

        }
        for(auto &i :map)
        {
            if(i.second %2==0)
                count+=i.second;
            else
            {
                count+=i.second - 1;
                flag=true;
            }
        }
        if(flag)
            return count+1;
        else
        {
            return count;
        }
    }
};