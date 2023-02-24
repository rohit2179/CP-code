#include<bits/stdc++.h>
using namespace std;

const int N =1e7+10;
vector<bool> isprime(N,1);

int main(){
    /*------Code started------------*/
    isprime[0] =isprime[1] = false;
    for (int i=2;i<N ;++i){
        if(isprime[i] == true){
            for(int j = 2*i;j<N;j+=i){
                isprime[j]=false;
            }
        }
    }
    /*----------code ended-----------*/
     
    for(int i=1;i<100;++i)
    {
        if(isprime[i])
        {
            cout<<i<< endl;
        }
    }
}