//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> printNos(int x) {
        // Write Your Code Here
        

        if (x == 1){
            return {1};
        }
        
        vector<int> ans = printNos(x-1);
        ans.push_back(x);
        // cout << x << endl;
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        // int arr[n];
        const int mx = 1e9;

        Solution ob;
        vector<int>res;
        res = ob.printNos(x);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends