class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            if(arr[i]<9){
                arr[i]+=1;
                return arr;
            }
            arr[i]=0;

        }

        vector<int> res(n+1,0);
        res[0]=1;
        return res;

        
    }
};