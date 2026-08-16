class Solution {
public:
    int reverseBits(int n) {
        int result = 0;
        for(int i =0;i<32;i++){
            int lastbit = n%2;
            result= result*2+lastbit;
         n = n/2;
        }
           
        return result;
    }
};