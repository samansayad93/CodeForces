#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0,last,now;
    for(int i=0;i<n;i++){
        cin>>now;
        if(now != last){
            count++;
            last = now;
        }
    }
    cout<<count<<endl;
    return 0;
}