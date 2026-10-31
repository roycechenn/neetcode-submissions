class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int stone : stones)
            pq.push(stone);

        while(pq.size() > 1){
            int tmp = pq.top();
            pq.pop();
            if (tmp == pq.top()){
                pq.pop();
                continue;
            }

                tmp = tmp - pq.top();
                pq.pop();
                pq.push(tmp);
            
        }

        return (pq.size() == 1) ? pq.top() : 0;
    }
};
