// https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1

//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> a;
        if(n==1)
        a.push_back(1);
        else
        {
            
            a.push_back(1);
            a.push_back(1);
            
            long long sum=2,i=2;
            while(n>2)
            {
                a.push_back(sum);
                sum=a[i-1]+a[i];
                i++;
                n--;
            }
        }
        return a;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends