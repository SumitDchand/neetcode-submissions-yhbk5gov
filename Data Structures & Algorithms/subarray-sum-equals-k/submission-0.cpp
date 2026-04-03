class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]=1 ;//why?
        //mpp[0]=1 → handles subarray starting from index 0
        int prefSum=0; 
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            prefSum += nums[i];
            //Count how many previous prefix sums = prefSum - k
            int remove = prefSum -k;
            cnt += mpp[remove];
            mpp[prefSum] += 1;
        }
        return cnt;
    }
};