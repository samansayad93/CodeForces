#include <iostream>

using namespace std;

int main(){
    string input;
    cin>>input;
    for(int i=0;i<input.length();i++){
        if(input[i] == 'H' || input[i] == 'Q' || input[i] == '9'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}