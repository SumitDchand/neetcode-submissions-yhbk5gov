class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=0;
        // unordered_set<int>st(nums1.begin(), nums1.end());//cant use said inplace
        for(int i=nums1.size()-1; i>=m; i--){
            nums1[i]=nums2[k++];
        }
        sort(nums1.begin(), nums1.end());
    }
};