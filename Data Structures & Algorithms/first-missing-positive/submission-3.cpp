class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        long long k=1;
        while(find(nums.begin(), nums.end(), k)!=nums.end()){
            k++;
        }
        int ans =k;
        return k;

        // unoredered_set<long long> st(nums.begin(), nums.end());
        // long long k=0;
        // --
        // long long ele = INT_MAX;
        // int ans=1;
        // for(long long i=0; i<nums.size()-1; i++){
        //     if(nums[i]>=0 && nums[i]<=nums[i+1] && nums[i] <= ele){
        //         ele = nums[i];
        //     }
        //     else if(nums[i+1]>=0 && nums[i+1]<=ele){
        //         ele = nums[i+1];
        //     }

        // }
//we have to use O(1) space comlexity hence we cannnot use set;
//to find in arr=> if(find(arr.begin(), arr.end(), num)==arr.end());

        // for(long long i=0; i<nums.size(); i++){
        //     if(find(nums.begin(), nums.end(), ele+1)==nums.end()){
        //         ans = ele+1;
        //         break;
        //     }
        //     else ele++;
        // }
        // return ans;

    }
};