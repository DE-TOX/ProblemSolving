class Solution {
public:
    int hammingWeight(uint32_t n) {
        int m=0;
        while(n!=0){
            if(n&1){
                m++;
            }
           n= n>>1;
        }
        return m;
    }
};