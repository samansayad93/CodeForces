#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int sum = 0;
    int tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp > m){
            sum += 2;
        }
        else{
            sum++;
        }
    }
    cout<<sum<<endl;
}