class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int t_gas=0,t_cost=0;
        int c_gas=0,start=0;
        for(int i=0;i<n;i++)
        {
            t_gas+=gas[i];
            t_cost+=cost[i];
            c_gas+=gas[i]-cost[i];
            if(c_gas<0)
            {
                start=i+1;
                c_gas=0;
            }
        }
        if(t_gas<t_cost)
        return -1;
            return start;
    }
};