class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k){
        if(nums.size()<=1) return nums[0]/k;
        int sum = 0;
        for(int i = 0;i<k;i++){
            sum+=nums[i];
        }
        int maxSum = sum;
        for(int i = k;i<nums.size();i++){
            sum+=nums[i];
            sum -=nums[i-k];
            maxSum = max(maxSum,sum); 
        }
        return maxSum*1.00/k;
    }
};
