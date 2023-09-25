class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int sum  = 0;
      for(int i = 0 ; i < nums.size(); i++){
        sum = sum + nums[i];
      }
      int sum_left = 0 ;
      for(int i = 0 ; i < nums.size(); i++){
       int sum_right = sum - sum_left - nums[i];
       if(sum_left == sum_right){
         return i;
       }
       sum_left = sum_left + nums[i];
       if(sum_left  == 0 && i == nums.size() - 2 ){
         return i + 1;
       }
     

     }
     return -1; 
    }
};