#include<bits/stdc++.h>
using namespace std;

int main(){

int t,a,a1,a2,b,b1,b2;
cin>> t ;
while (t--)
{
   vector<int> a(3),b(3);

   for (int i = 0; i < 3; i++)
   {
    cin>> a[i] ;
    
   }
   for (int i = 0; i < 3; i++)
   {
    cin>> b[i] ;
    
   }

   sort(a.begin(),a.end(),greater<int>());
   sort(b.begin(),b.end(),greater<int>());

   int ali = a[0]*100+a[1]*10+a[2];
   int bo = b[0]*100+b[1]*10+b[2];

   if(ali>bo){
    cout<< "Alice"<<endl ;
    
   }else if (bo>ali)
   {
    cout<<"Bob" <<endl ;
    
   }else
   {
    cout<< "Tie"<<endl ;
    
   }
   
   
    
    
    
}



return 0;
}
