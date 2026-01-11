#include<bits/stdc++.h>
using namespace std;

int main(){

int x,y;
cin>> x>>y ;
if(x > y){
    int r = x-y;

    if(r <= 3){
        cout<< "Yes" ;
        
    }else
    {
        cout<<"No"  ;
        
    }
    

}else if (y>x)
{
    int r = y-x;
    if(r <= 2){
            cout<< "Yes" ;
        
    }else
    {
        cout<<"No"  ;
        
    }
}






return 0;
}
