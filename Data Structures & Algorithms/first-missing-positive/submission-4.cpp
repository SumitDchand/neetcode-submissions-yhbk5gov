class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        long long k=1;
        // while(find(nums.begin(), nums.end(), k)!=nums.end()){
        //     k++;
        // }
        // int ans =k;
        // return k;
        int n = nums.size();

        // Step 1: Place each number in its correct position
        for (int i = 0; i < n; i++) {
            while (nums[i] >= 1 && nums[i] <= n &&
                   nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // Step 2: Find the first missing positive
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        // Step 3: If all positions are correct
        return n + 1;
    

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