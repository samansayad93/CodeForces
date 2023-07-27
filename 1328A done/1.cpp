#include <iostream>

using namespace std;

int  main(){
    long n;
    cin>>n;
    for(long i=0;i<n;i++){
        long a,b;
        cin>>a>>b;
        if(a%b > 0){
            cout<<b-(a%b)<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}