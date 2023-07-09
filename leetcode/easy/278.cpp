// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#include <bits/stdc++.h>
class 278 {
public:
    int firstBadVersion(int n) {
        int l=1,h=n;//binary search yay
        while(l<=h){
            int mid=l+(h-l)/2;
            if(isBadVersion(mid)){
                h=mid-1;
            } else if(!isBadVersion(mid)){
                l=mid+1;
            }
        }
        return l;
    }
};