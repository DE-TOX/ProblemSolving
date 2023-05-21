class Solution {
public:
    int findComplement(int n) {
        if(n==0){
            return 1;
        }
        int m = n;
        int x = 0;
        while(m!=0){
            x=(x<<1)|1;
            m=(m>>1);
        }
        return (~n)&x;
        
    }
};