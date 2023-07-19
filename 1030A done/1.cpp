#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp == 1){
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
    return 0;
}