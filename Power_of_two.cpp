// https://leetcode.com/problems/power-of-two/

class Solution 
{
public:
    bool isPowerOfTwo(long long n) 
    {
        while(n!=0)
        {
            if(n==1)
            return true;
            if(n%2!=0)
            return false;

            n=n/2;
        }
        return false;
    }
};