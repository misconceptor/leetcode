class Solution {
public:
    int mySqrt(int x) {
        long long l = 0;
        long long r = x;
        while(r-l>1){
            long long m = (l+r)/2;
            if(m*m == x){
                return (int)m;
            } else if(m*m < x){
                l = m;
            } else {
                r = m;
            }
        }
        if(r*r == x){
            return (int)r;
        }
        return (int)l;
    }
};
