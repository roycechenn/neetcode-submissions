class MedianFinder {
    priority_queue<int> maxHeap_small;
    priority_queue<int, vector<int>, greater<int>> minHeap_large;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxHeap_small.push(num);
        if (!minHeap_large.empty() && maxHeap_small.top() > minHeap_large.top()){
            minHeap_large.push(maxHeap_small.top());
            maxHeap_small.pop();
        }

        if(minHeap_large.size() > maxHeap_small.size() + 1){
            maxHeap_small.push(minHeap_large.top());
            minHeap_large.pop();
        }

        if (maxHeap_small.size() > minHeap_large.size() + 1){
            minHeap_large.push(maxHeap_small.top());
            maxHeap_small.pop();
        }
    }
    
    double findMedian() {
        if (maxHeap_small.size() == minHeap_large.size())
            return ((double)(maxHeap_small.top() + minHeap_large.top()) / 2.0);
        if (maxHeap_small.size() > minHeap_large.size()) return maxHeap_small.top();
        return minHeap_large.top();
    }
};
