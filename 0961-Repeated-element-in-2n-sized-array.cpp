class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        
        int arr[10001]={0};
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(int i=0;i<10001;i++){
            if(arr[i]>1) return i;
        }
        return -1;
    }
};