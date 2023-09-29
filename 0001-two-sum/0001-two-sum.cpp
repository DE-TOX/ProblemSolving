class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int left = 0 , curr = 0 ;
        // vector<int> ans;
        // for(int right = 0 ; right < nums.size(); right++){
        //     curr = curr + nums[right];
        //     while(curr > target){
        //         curr = curr - nums[left];
        //         left++;
        //     }
        //     if(curr == target){
        //         ans.push_back(left);
        //         ans.push_back(right);
        //         break;
        //     }
        // }
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            int temp = target-nums[i];
            if(mp.find(temp)!=mp.end()){
                if(i != mp[temp]){
                    ans.push_back(i);
                    ans.push_back(mp[temp]);
                    break;
                }
            }
        }
        return ans;

        return ans;
    }
};