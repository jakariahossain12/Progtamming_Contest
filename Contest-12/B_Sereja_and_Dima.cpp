#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;

int v[n];

for (int i = 0; i < n; i++)
{
    cin>> v[i] ;
    
}

sort(v,v+n,greater<int>());
long long int s,y;

for (int i = 0; i < n; i++)
{
    if(i%2 == 0){
        s+=v[i];
    }else{
        y+=v[i];
    }
}

cout<< s << " " <<y;



return 0;
}
