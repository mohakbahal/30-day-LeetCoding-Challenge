// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int a=1,b=n,c;
        while(a<b)
        {
            c=a+(b-a)/2;
            if(!isBadVersion(c))    //kinda Binary Search
                a=c+1;
            else
                b=c;
        }
        return a;
    }
};