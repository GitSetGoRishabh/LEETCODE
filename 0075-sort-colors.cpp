//using hashing - beats 100%

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int hash[3]={0};
        for(int i=0;i<n;i++){
            if(nums[i]==0) hash[0]++;
            else if(nums[i]==1) hash[1]++;
            else hash[2]++;
        }
        int zero=hash[0];
        int one=hash[1];
        int two=hash[2];
        for(int i=0;i<zero;i++){
            nums[i]=0;
        }

        for(int i=zero;i<zero+one;i++){
            nums[i]=1;
        }

        for(int i=zero+one;i<zero+one+two;i++){
            nums[i]=2;
        }
    }
};

