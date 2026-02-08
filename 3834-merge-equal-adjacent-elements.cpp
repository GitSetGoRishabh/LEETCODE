class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
            while(ans.size() >= 2 && ans[ans.size()-1]==ans[ans.size()-2]){
                long long val=ans.back();
                ans.pop_back();
                ans.back()+=val;
            }
        }
        return ans;
    }
};