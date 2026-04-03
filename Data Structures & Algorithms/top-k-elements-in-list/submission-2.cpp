class Solution {
public:
    typedef pair<int,int> P;

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mpp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        // int bigNum=INTMIN;
        // sort(mpp.begin(), mpp.end());
        priority_queue<P, vector<P>, greater<P>>pq;//min heap
        //since we are storing pair of ints therefor use 
        //typdef so that we wouldnt have to write same thing again n agn
        for(auto num: mpp){// n time coomplexity
            int value= num.first;
            int freq = num.second;
            pq.push({freq, value});//store acc to freq(means min freq wala will be on top)
            if(pq.size()>k){
                pq.pop();
            }//ths push and pop takes log k time
        }
        // total here O(nlogk) TC(better approach than sort where we are getting nlogn tc)
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
