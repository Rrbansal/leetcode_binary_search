class Solution {
public:
    int arrangeCoins(int n) {
        int low=1;
        int high=n;
        long long mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if((mid*(mid+1))/2 ==n)
            return mid;
            else if((mid*(mid+1))/2 <n)
            low=mid+1;
            else
            high=mid-1;
        }
        return low-1;

    }
};
