#include <iostream>

using namespace std;

int main(){
    int a[4],count = 0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    if(a[1] == a[0]){++count;}
    if(a[2] == a[0] || a[2] == a[1]){++count;}
    if(a[3] == a[0] || a[3] == a[1] || a[3] == a[2]){++count;}
    cout<<count<<endl;
    return 0;
}