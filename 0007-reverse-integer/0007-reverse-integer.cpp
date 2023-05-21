#include <cmath>
class Solution {
public:
    int reverse(int x) {
       long long int n =0;
        while(x!=0){
            
            int m = x%10;
            if(n>INT_MAX/10 || n<INT_MIN/10){
                return 0;
            }
            n = 10*n+m;
            x = x/10;
        }
        return n;
    }
};