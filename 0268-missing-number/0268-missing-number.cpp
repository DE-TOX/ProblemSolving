class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int sum = (n)*(n+1)/2;
        int a = 0;
        for(int i = 0 ; i < n;i++){
            a = a + nums[i];
        }
        
        return sum - a;
        
    }
};