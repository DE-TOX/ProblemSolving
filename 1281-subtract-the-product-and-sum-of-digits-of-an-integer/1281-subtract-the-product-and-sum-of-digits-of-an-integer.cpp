class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0 ,product = 1;
        while(n>0){
            int m=n%10;
            sum = sum + m;
            product = product * m;
            n = n / 10;
        }
        
    return product-sum;    
    }
};