class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>arr(nums.size());
        int n= arr.size();
        for(int i=0; i<nums.size(); i++){
            if(i+k >= n){
                arr[(i+k)%n]= nums[i];
            }
            else {
                arr[i+k]= nums[i];
            }
            
        }
        for(int i=0; i<n; i++){
            nums[i]= arr[i];
        }
        
    }
};