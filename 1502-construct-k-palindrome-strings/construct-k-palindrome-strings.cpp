class Solution {
public:
    bool canConstruct(string s, int k) {
        const int n=s.size();
        if (n<k)
            return 0;
        unsigned freq=0;
        for(char c:s)
            freq^=(1<<(c-'a'));
        return popcount(freq)<=k;
    }
};