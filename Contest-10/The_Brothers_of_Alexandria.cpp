#include<bits/stdc++.h>
using namespace std;

int main(){

int n,k;
cin>> n >>k ;

vector<int>a;

while (n--)
{
    int x;
    cin>> x ;
    a.push_back(x);
    
}

sort(a.begin(),a.end());

cout<< a[k-1] ;





return 0;
}
