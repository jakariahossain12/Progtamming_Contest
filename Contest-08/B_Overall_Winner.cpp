#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;
string s;
cin>> s ;
int T = 0;
int A = 0;

for (auto c:s)
{
    if(c == 'A'){
        A++;
    }else{
        T++;
    }
}

if(T>A){
    cout<< "T" ;
    
}else if(A>T){
    cout<< "A" ;
    
}else{
    if(s.back() == 'A'){
        cout<< "T" ;

    }else{
        cout<< "A" ;
        
    }

}






return 0;
}
