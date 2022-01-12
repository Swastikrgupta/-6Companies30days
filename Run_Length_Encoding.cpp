// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{  
  int temp=1;
  string osf="";
  for(int i=1;i<src.size();i++)
  {
      if(src[i]==src[i-1] )
      {
          temp++;
      }
      if(src[i]!=src[i-1] || i==(src.size()-1))
      {
          osf.push_back(src[i-1]);
          osf.append(to_string(temp));
          temp=1;
      }
  }
    if(src.size()==1)
    {    osf.push_back(src[0]);
         osf.append(to_string(1));
    }
    else if(src[src.size()-2] != src[src.size()-1])
    {
        osf.push_back(src[src.size()-1]);
        osf.append(to_string(1));
    }
  return osf;
}     
 
