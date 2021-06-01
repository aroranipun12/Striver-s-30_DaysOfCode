class Solution {
public:
    //to solve this in O(1) space
   // we know the sum of first n natural numbers right so just keep a sum and subtract
    int missingNumber(vector<int>& nums) {
        //total size is including 0 which doesn't contribute to sum
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int given_sum = 0;
        for(int i=0;i<n;i++){
            given_sum += nums[i];
        }
        if(given_sum == sum)
            return 0;
        else
            return sum-given_sum;
        
    }
};