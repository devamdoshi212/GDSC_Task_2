// https://leetcode.com/problems/roman-to-integer/submissions/868478956/

class Solution {
public:
    int romanToInt(string s) 
    {
        int sum=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if((s[i]=='I' && s[i+1]=='V') || (s[i]=='I' && s[i+1]=='X') || (s[i]=='X' && s[i+1]=='L') || (s[i]=='X' && s[i+1]=='C') || (s[i]=='C' && s[i+1]=='D') || (s[i]=='C' && s[i+1]=='M') )
            {
                sum=sum+val(s[i+1])-val(s[i]);
                i++;
            }
            else
            sum=sum+val(s[i]);
        }
        return sum;
    }
    int val(char a)
    {
        if(a=='I')
        return 1;
        else if(a=='V')
        return 5;
        else if(a=='X')
        return 10;
        else if(a=='L')
        return 50;
        else if(a=='C')
        return 100;
        else if(a=='D')
        return 500;
        else if(a=='M')
        return 1000;
        else
        return 0;
    }
};