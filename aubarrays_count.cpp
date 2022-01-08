#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) 
    {
        int osf=0;
        long long int prod = 1;
        for(int s=0,e=0;e<n;e++)
        {
            prod*=a[e];
            while(s<e && prod>=k)
            {
                prod/=a[s];
                s++;
            }
            if(prod<k)
                osf+=e-s+1;
            // cout<<osf<<endl;
        }
        return osf;
        // for(int i=0;i<n;i++)
        // {
        //     long long int prod=a[i];
        //     if(prod<k)
        //     {
        //         osf++;
        //     }
        //     else
        //         continue;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         prod*=a[j];
        //         if(prod<k)
        //             osf++;
        //         else
        //             break;
        //     }
    //     }
    //     return osf;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
