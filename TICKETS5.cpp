#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
      string s;
      cin>>s;

      
        int p=0;

        if(s[0]==s[1])
        {
            cout<<"NO"<<endl;
        }
        
        else
        {
            for(int i=0; i<s.size(); i++)
      {

         if(i%2==0)
         { 
            if(s[i]!=s[0])
            {    p=1;
                 break;
            }
             
         }
         else
         {

             if(s[i]!=s[1])
            {    p=1;
                 break;
             }

         }
            
          

      }


      if(p==0)
      {
        cout<<"YES"<<endl;
      }
        
      else
      {
        cout<<"NO"<<endl;
      }  
        }
    }
    return 0;

}
