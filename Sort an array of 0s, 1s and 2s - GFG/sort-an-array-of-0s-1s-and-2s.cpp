//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    // The array is divided into four sections: 
    // arr[0] to arr[low – 1]
    // arr[low] to arr[mid – 1]
    // arr[mid] to arr[high – 1]
    // arr[high] to arr[n-1]
    // If the ith element is 0 then swap the element to the low range.
    // Similarly, if the element is 1 then keep it as it is.
    // If the element is 2 then swap it with an element in high range.
    
    
    // Another approach - Count the number of 0s, 1s, and 2s in the given array. 
    // Then store all the 0s at the beginning followed by all the 1s and then all the 2s.
    
    public:
    void sort012(int a[], int n)
    {
        int low = 0, mid =0, high = n-1;
        while(mid <= high)
        {
            if(a[mid]==0)
            {
                int temp = a[mid];
                a[mid] = a[low];
                a[low] = temp;
                low++;
                mid++;
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                int temp = a[mid];
                a[mid]= a[high];
                a[high] = temp;
                high--;
            }
        }
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends