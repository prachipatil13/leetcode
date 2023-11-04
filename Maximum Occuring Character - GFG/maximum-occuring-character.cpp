//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        char count[26]={0};
        
        for(int i=0;i<str.size();i++){
            char ch=str[i];
            if(ch>='a'&&ch<='z'){
                int idx=ch-'a';
                count[idx]++;
            }else{
                int idx= ch-'A';
                count[idx]++;
            }
        }
        
        int freq=0;
        int j=-1;
        for(int i=0;i<26;i++){
          if(freq<count[i]){
              freq=count[i];
              j=i;
          }  
        }
        
        char c=j+'a';
        return c;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends