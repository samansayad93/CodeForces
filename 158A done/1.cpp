#include <iostream>

using namespace std;

int main(){
    long n,k;
    cin>>n>>k;
    long tmp[1000],count=0;
    for(long i=0;i<n;i++){
        cin>>tmp[i];
    }
    long res = tmp[k-1];
    for(long i=0;i<n;i++){
        if(tmp[i] >= res && tmp[i] > 0){
            count++;
        }
    } 
    cout<<count<<endl;
}