#include <iostream>

using namespace std;

int main(){
    int arr[25];
    int res,res1,res2;
    for(int i=0;i<25;i++){
        cin>>arr[i];
        if(arr[i] == 1){
            res = i;
        }
    }
    res1 = (res/5)+1;
    res2 = (res%5)+1;
    res1 = abs(3-res1);
    res2 = abs(3-res2);
    cout<<res1+res2<<endl;
}