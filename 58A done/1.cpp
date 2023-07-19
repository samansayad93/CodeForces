#include <iostream>

using namespace std;

int main(){
    string greet = "hello";
    string line;
    cin>>line;
    int a=0,b=0;
    while (b<line.size())
    {
        if(line[b++] == greet[a]){
            a++;
        }
        if(a >= greet.size()){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}