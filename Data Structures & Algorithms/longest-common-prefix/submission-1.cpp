class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans ="";
        for(int i=0; i<strs[0].size(); i++){
            for(int j=0; j<n-1; j++){//loop for taking strs elements
                if(strs[j][i] != strs[j+1][i]) return ans;
            }
            ans = ans + strs[0][i];//comparison me i fix rahega and j se matlab nhi hai sab same character dega
        }
        return ans;
    }
};