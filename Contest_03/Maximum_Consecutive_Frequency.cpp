#include<bits/stdc++.h>
using namespace std;

int main(){

long long int n;
cin>> n ;
long long a[n];
for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
    
}
long long free[n];
for (int i = 0; i < n; i++)
{
    free[a[i]]++;
}

long long hight = INT_MIN;
long long ind = INT_MIN;
for (int i = 0; i < n; i++)
{
    hight=max(hight,free[i]);
    ind = i;
}

cout<< ind<<" " <<hight<<endl;





return 0;
}
