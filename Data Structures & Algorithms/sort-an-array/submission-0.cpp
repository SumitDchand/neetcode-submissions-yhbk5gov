class Solution {
public:

    void merge(vector<int> &nums, int i, int mid, int j){
        int left =i, right = mid+1;
        vector<int> temp;//each time temp vector thaat will contain part of sorted array
        //which will copy back to nums in temporary place or it may even desired place
        //we have two arrays, 
        //first array start from left=i , second will be right= mid+1,
        while(left<=mid && right<=j){
            if(nums[left] < nums[right])
            temp.push_back(nums[left++]);
            else temp.push_back(nums[right++]);
        }
        while(left<=mid){
            temp.push_back(nums[left++]);
        }
        while(right<=j){
            temp.push_back(nums[right++]);
        }

        for(int s=i; s<=j; s++){
            nums[s]= temp[s-i];
        }
    }

    void merge_sort(vector<int>&nums, int i, int j){
        if(i>=j) return;
        int mid = (i+j)/2;
        merge_sort(nums, i, mid);
        merge_sort(nums, mid+1, j);
        merge(nums, i, mid, j);
    }

    vector<int> sortArray(vector<int>& nums) {
        int i=0, j= nums.size()-1;
        merge_sort(nums, i, j);
        return nums;
    }
};