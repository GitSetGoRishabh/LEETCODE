class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector <int>> ans;
        if(nums.size()<3) return {};
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                int total=nums[i]+nums[l]+nums[r];
                if(total==0){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l]==nums[l-1]) l++;
                    while(r>l && nums[r]==nums[r+1]) r--;
                }
                
                else if(total>0) r--;
                else l++;
            }
        }
        return ans;
        
    }
};