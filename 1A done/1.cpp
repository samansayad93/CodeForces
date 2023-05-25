#include <iostream>

using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long result = 1;
    if(n%a != 0){
        result *= (n/a)+1;
    }
    else{
        result *= n/a;
    }
    if(m%a != 0){
        result *= (m/a)+1;
    }
    else{
        result *= m/a;
    }
    cout<<result<<endl;
}