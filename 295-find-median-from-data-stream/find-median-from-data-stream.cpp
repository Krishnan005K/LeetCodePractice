class MedianFinder {
public:
    priority_queue<int>maxpq;
    priority_queue<int,vector<int>,greater<int>>minpq;
    MedianFinder() {
    }
    
    void addNum(int num) {
        maxpq.push(num);
        minpq.push(maxpq.top());
        maxpq.pop();
        if(minpq.size()>maxpq.size())
        {
            maxpq.push(minpq.top());
            minpq.pop();
        }
    }
    
    double findMedian() {
        if(maxpq.size()>minpq.size())
            return maxpq.top();
        return (maxpq.top()+minpq.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */