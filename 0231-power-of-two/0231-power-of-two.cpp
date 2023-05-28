class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i =0; i<=30;i++){
            int a = pow(2,i);
            if(n==a){
                return true;
            }
        }
        return false;
    }
};