class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>pq(gifts.begin(), gifts.end());
        for(int i = 0; i < k; ++i)
        {
            long long max = pq.top();
            max = floor(sqrt(max));
            pq.pop();
            pq.push(max);
        }

        long long ans = 0;
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};