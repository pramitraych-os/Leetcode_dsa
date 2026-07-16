class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        while(n>1){
            if(n%3!=0){
                break;
            }
            n/=3;
        }
        if(n==1){
            return true;
        }else{
            return false;
        }
    }
};