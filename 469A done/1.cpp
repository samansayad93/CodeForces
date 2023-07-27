#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int c1,c2;
    int arr1[100],arr2[100];
    cin>>c1;
    for(int j=0;j<c1;j++){
        cin>>arr1[j];
    }
    cin>>c2;
    for(int j=0;j<c2;j++){
        cin>>arr2[j];
    }
    for(int i=1;i<=n;i++){
        bool flag = false;
        for(int j=0;j<c1;j++){
            if(arr1[j] == i){
                flag = true;
                break;
            }
        }
        for(int j=0;j<c2;j++){
            if(arr2[j] == i){
                flag = true;
                break;
            }
        }
        if(flag == false){
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}