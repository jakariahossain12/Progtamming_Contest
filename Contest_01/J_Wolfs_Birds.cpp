#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>> t ;
    while (t--)
    {
            int n;
    string s;
    cin>> n ;
    cin>>s;
    



int p = s.find("1");



int count = 0;
if(p!=-1){
    for (int i = 0; i < p; i++)
    {
        count++;
    }
    cout<< count<<endl ;
    
}else if (p == -1)
{
    cout<< n<<endl ;
    
}
    }
    
    











return 0;
}
