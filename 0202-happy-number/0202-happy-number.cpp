class Solution {
public:
    bool isHappy(int n) {
        if(n<=0)return false;
        while(n!=1 && n!=4){
            int sqr=0;
            while(n>0){
                int num=n%10;
                sqr += num*num;
                n=n/10;
            }
            n=sqr;
        }
        if(n==1)return true;
        return false;
    }
};