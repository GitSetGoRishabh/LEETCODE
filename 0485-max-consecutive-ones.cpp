class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n=arr.size();
        int counter1=0;
        int counter2=0;

        for(int i=0;i<n;i++){
            if(arr[i]==1) counter1++;
            else{
                counter2=max(counter1,counter2);
                counter1=0;
            }
        }
        counter2=max(counter1,counter2);
        return counter2;
    }
};