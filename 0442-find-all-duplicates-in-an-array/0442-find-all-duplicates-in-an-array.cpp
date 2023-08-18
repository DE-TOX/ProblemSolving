class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int x = 0;
        for(int i = 1 ; i < nums.size();i++){
            x = nums[i-1] ^ nums[i];
            if(x == 0){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};