#include <iostream>

using namespace std;

int main(){
    int n,k,w;
    cin>>k>>n>>w;
    long sum = 0;
    for(int i=1;i<=w;i++){
        sum += k*i;
    }
    if(sum > n){
        cout<<sum-n<<endl;
    }
    else{
        cout<<0<<endl;
    }
}