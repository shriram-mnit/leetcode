class MedianFinder {
public:
    priority_queue<int> mxHeap,mnHeap;
    MedianFinder() {}
    
    void addNum(int num) {
        
            mxHeap.push(num);
        mnHeap.push(-1 * mxHeap.top());
        mxHeap.pop();
        if (mxHeap.size() < mnHeap.size())
        {
            mxHeap.push(-1 * mnHeap.top());
            mnHeap.pop();
        }
    }
    
    double findMedian() {
        if(mxHeap.size()==mnHeap.size())
        {
            return (double)(mxHeap.top()+-1*mnHeap.top())/2;
        }
        else 
            return (double)(mxHeap.top());
    }
};
