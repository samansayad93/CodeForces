#include <iostream>
#include <string>

using namespace std;

int check(string a,string b){
    int lenght = a.length();
    for(int i=0;i<lenght;i++){
        int tmp1 = tolower(a[i]);
        int tmp2 = tolower(b[i]);
        if(tmp1 > tmp2){
            return 1;
        }
        else if(tmp1 < tmp2){
            return -1;
        }
    }
    return 0;
}

int main(){
    string a,b;
    cin>>a>>b;
    cout<<check(a,b)<<endl;
}