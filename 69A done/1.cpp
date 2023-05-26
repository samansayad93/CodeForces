#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100][3];
    for(int i = 0; i < n; i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }

    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum = 0;
        for(int j = 0; j < n; j++){
        sum += arr[j][i];
        }
        if(sum){
        cout<<"NO"<<endl;
        return 0;
        }
    }
    cout<<"YES"<<endl;
}