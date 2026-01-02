//brute

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((nums[i]+nums[j])==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};


//better - hashing

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            int a=arr[i];
            int more=target-a;
            if(mpp.find(more)!=mpp.end()){
                return{mpp[more],i};
            }
            mpp[a]=i;
        }
        return {};
    }
};