#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[3];
    int count =0;
    for(int i=0;i<n;i++){
        int count2 =0;
        for(int j=0;j<3;j++){
            cin>>a[j];
            if(a[j] == 1){
                count2++;
            }
        }
        if(count2 >= 2){
            count++;
        }
    }
    cout<<count<<endl;
}