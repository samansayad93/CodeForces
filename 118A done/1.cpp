#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    cin>>a;
    int lenght = a.length();
    string b;
    for(int i=0;i<lenght;i++){
        if(a[i] == 'A' || a[i] == 'a' || a[i] == 'E' || a[i] == 'e' || a[i] == 'O' || a[i] == 'o' || a[i] == 'U' || a[i] == 'u' || a[i] == 'I' || a[i] == 'i' || a[i] == 'Y' || a[i] == 'y'){
            continue;
        }
        if(isupper(a[i])){
            a[i] += 32;
        }
        b.append(".");
        string tmp(1,a[i]);
        b.append(tmp);
    }
    cout<<b<<endl;
}