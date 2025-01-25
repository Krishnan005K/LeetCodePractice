class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size();
        for(int i=0;i<len;i++)
        {
            bool right=false,left=false;
            if(i==0 || flowerbed[i-1]==0)
                left=true;
            if(i==len-1 || flowerbed[i+1]==0)
                right=true;

            if(left&&right&& flowerbed[i]==0)
            {
                flowerbed[i]=1;
                n--;
            }
        }
        return n<=0;
    }
};