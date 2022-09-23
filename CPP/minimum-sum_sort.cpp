//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here

        sort(a, a + n);                 // sorts array a[] into ascending order
        sort(b, b + n, greater<int>()); // sorts array b[] into descending order

        /*
        Initialise a 64 bit integer counter as "minsum",
        where the 'long long' (64 bit size) is needed for
        the larger test cases:
        */
        long long int minsum = 0;

        /*
        Take the ith element a[i] of the sorted a[] array, and
        multiply it with the (n-i-1) element b[n-n-i] of the
        sorted b[n-i-1] array (as they are both sorted into
        an increasing order):
        */
        for (int i = 0; i < n; i++)
        {
            minsum += a[i] * b[n - i - 1];
        }

        return minsum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n], b[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minValue(a, b, n) << endl;
    }

    return 0;
}
// } Driver Code Ends