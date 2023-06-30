//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  int beg = 0, end = str.length()-1;
  while(beg < end)
  {
      int temp = str[beg];
      str[beg] = str[end];
      str[end] = temp;
      beg++;
      end--;
  }
  return str;
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends