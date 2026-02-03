#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;

while (t--)
{
    int n,a,b;
    cin>> n>>a>>b ;

    int count = 0;
    bool waringJecket = false;

    for (int i = 0; i < n; i++)
    {
        int trm;
        cin>> trm ;

        if(trm < a && waringJecket == false){
            
                count++;
                waringJecket= true;
            
        }else if (trm >  b)
        {
            waringJecket = false;
        }
        
        
    }
    
    cout<< count<<endl ;
    
}




return 0;
}
