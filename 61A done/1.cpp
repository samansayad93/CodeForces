#include <iostream>

using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        cout<<((a[i] - '0')^(b[i] - '0'));
    }
    cout<<endl;
    return 0;
}