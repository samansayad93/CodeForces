#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int tmp;
    int list[1000];
    for(int i=0;i<n;i++){
        cin>>tmp;
        list[tmp-1]=i;
    }
    for(int i=0;i<n;i++){
        cout<<list[i]+1<<" ";
    }
    cout<<endl;
    return 0;
}