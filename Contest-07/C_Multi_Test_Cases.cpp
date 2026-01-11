#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;
while (t--)
{
        int n;
    cin>> n ;

    long long int count = 0;
    
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
    }


       for (int i = 0; i < n; i++)
    {
        if(a[i]%2 != 0 ){
            count++;
        }
        
    }

    cout<< count<<endl ;
    

    
}



      
  



return 0;
}
