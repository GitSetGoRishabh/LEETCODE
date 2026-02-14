class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int sum=0;
        int ans=0;
        int diff_max=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(sum==target){
                    return sum;
                }
                
                else if(sum>target){
                    r--;
                }
                else{
                    l++;
                }
                int diff=abs(sum-target);
                if(diff<diff_max){
                    diff_max=diff;
                    ans=sum;
                }

            }

        }
        return ans;
    }
};