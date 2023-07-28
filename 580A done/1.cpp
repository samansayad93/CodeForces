#include <iostream>

using namespace  std;

int main(){
    long n;
    cin>>n;
    long a[1000000];
    for(long p = 0; p < n; p++){
        cin>>a[p];
    }

    long currentMax = 1;
    long ans = 1;
    for(long p = 1; p < n; p++){
        if(a[p] >= a[p - 1]){++currentMax;}
        else{currentMax = 1;}
        if(currentMax > ans){ans = currentMax;}
    }

    cout<<ans<<endl;

    return 0;
}