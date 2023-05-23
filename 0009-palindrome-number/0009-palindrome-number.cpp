class Solution {
public:
    bool isPalindrome(int x) {
        int m = abs(x);
        int a = 0;
        while(m!=0){
            int n = m%10;
            if(a>INT_MAX/10 || a<INT_MIN/10){
                return false;
            }
            a = a*10 + n;
            m = m/10;
        }
        if (a==x){
            return true;
        }
        return false;
    }
};