class Solution {
public:
    bool isHappy(int n) {
        int num;
        bool flag=false;
        int i=100;
        while(i>0){
            num=0;
            while(n>0){
                num+=(n%10)*(n%10);
                n=n/10;
                }
            n=num;
            i--;
            if(num==1){
                flag=true;
                break;
            }
        }
       return flag; 
    }
};