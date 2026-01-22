#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;

while (t--)
{
    string s;
    cin>> s ;
    bool isPos = false;
    
    if(s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
    cout<< "YES\n" ;

    else{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j =i+1 ; j < s.size(); j++)
        {
             swap(s[i],s[j]);
             if(s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
             {
             isPos = true;
             break;
             }
             else
             swap(s[i],s[j]);
             

   
        }
        
    }
    

  if(isPos)
  cout<< "YES\n" ;
  else
  cout<<"NO\n"  ;
    }

    
  
  



   
   
    
    
}



return 0;
}
