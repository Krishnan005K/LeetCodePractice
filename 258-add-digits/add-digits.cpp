class Solution {
public:
    int helper(int num, int val)
    {
        if(num<10)
        {
            val+=num;
            cout<<val;
            return val;
        }
        cout<<val;
        val+=num%10;
        cout<<val;
        num=num/10;
        cout<<num;
        return helper(num,val);
    }
    int addDigits(int num) {
        
        int res=num;
        res=helper(num,0);
        cout<<endl<<res<<endl;
        if(res>9)
            return addDigits(res);
        
        return res;
    }
};