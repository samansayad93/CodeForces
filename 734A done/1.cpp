#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    char a;
    int AC=0,DC=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a == 'A'){
            AC++;
        }
        if(a == 'D'){
            DC++;
        }
    }
    if(AC > DC){
        cout<<"Anton"<<endl;
    }
    else if(DC > AC){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}