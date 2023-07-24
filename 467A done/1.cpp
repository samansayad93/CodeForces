#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int r1,r2,count=0;
    for(int i=0;i<n;i++){
        cin>>r1>>r2;
        if(r2-r1>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}