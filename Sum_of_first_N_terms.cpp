// https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long N) 
    {
        long long a=(N*(N+1))/2;
        
        return a*a;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends