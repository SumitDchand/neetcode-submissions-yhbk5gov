class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1, zeromul=1;
        int cntzero=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0) cntzero++;
        }
        for(int i=0; i<nums.size(); i++){
            mul = mul * nums[i];
            if(nums[i]!=0 && cntzero==1){
                zeromul = zeromul * nums[i];
            }

        }
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0)  ans.push_back(mul/nums[i]);
            else if(cntzero>1) ans.push_back(0);
            else ans.push_back(zeromul);
        }
        return ans;
    }
};
