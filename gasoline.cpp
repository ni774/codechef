
#include <bits/stdc++.h>
using namespace std;
void solve(){
	    int cases;
	    cin>>cases;
	    int fuel[cases];
	    for(int i=0;i<cases;i++)
	    {
	        cin>>fuel[i];
	        
	    }
	    
	    int sum=fuel[0];
        int count=0;
        for(int i=1;i<cases;i++)
        {
            if(sum==0)
            {
                break;
            }
            sum=sum+fuel[i]-1;
            count++;
        }
        cout<<count+sum<<endl;
   }


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;
	cin>>test;
	while(test--)
	{
	    solve();
	}
	return 0;
}
