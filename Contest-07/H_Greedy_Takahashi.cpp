#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int a,b,k;
    cin>> a>>b>>k ;

   long long int reduseA = min(a,k);
   a-=reduseA;
   k-=reduseA;

   long long int reduseB = min(b,k);
   b-=reduseB;

    cout<< a << " " << b <<endl;
    
    
    


return 0;
}
