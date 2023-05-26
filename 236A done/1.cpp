#include <iostream>

using namespace std;

int main(){
    string a;
    cin>>a;
    long lenght = a.length();
    long count = a.length();
    for(long i=0;i<lenght;i++){
        if(a[i] == '~'){
            continue;
        }
        for(long j=i+1;j<lenght;j++){
            if(a[i] == a[j]){
                count--;
                a[j] = '~';
            }
        }
    }
    if(count%2 == 1){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
}