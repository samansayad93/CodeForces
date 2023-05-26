#include <iostream>

using namespace std;

int main(){
    string a;
    cin>>a;
    int tmp = toupper(a[0]);
    a.replace(0,1,"");
    cout<<(char)tmp<<a<<endl;
}