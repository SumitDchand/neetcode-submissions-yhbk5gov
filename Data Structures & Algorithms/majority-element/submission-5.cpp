class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int, int> mp;
        int n= nums.size();
        int candidate =0; 
        int count =0; 
        for(auto num: nums){
            if(count == 0){
                candidate = num;
            }

            if(candidate == num){
                count++;
            }
            else count--;
        }
        return candidate;
    }
};