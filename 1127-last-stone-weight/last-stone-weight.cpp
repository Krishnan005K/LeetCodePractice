class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++)
        {
            cout<<stones[i]<<" ";
            pq.push(stones[i]);
        }
        while(pq.size()>1)
        {
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x!=y)
                pq.push(abs(x-y));
            else 
                pq.push(0);
            
        }
        return pq.top();
    }
};