class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int  i = 0 ;
        int j = height.size() - 1;
        int temp  = 0;
        while(i < j){
          int a = 0;
          if(height[i] > height[j]){
            a = height[j]*(j-i);
          }else{
            a = height[i]*(j-i);
          }
          cout<<a<<endl;
          temp = max(a,temp);
          if(height[i] < height[j]){
            i++;
          }else{
            j--;
          }
        }
        return temp;
    }
};