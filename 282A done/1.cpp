#include <iostream>

using namespace std;

int main(){
    int x =0,n;
    cin>>n;
    string a;
    for(int i=0;i<n;i++){
        cin>>a;
        if (a == "X++"){
            // if(i == n-1){
            //     continue;
            // }
            x++;
        }
        else if (a == "++X"){
            x++;
        }
        else if (a == "X--"){
            // if(i == n-1){
            //     continue;
            // }
            x--;
        }
        else if(a == "--X"){
            x--;
        }
    }
    cout<<x<<endl;
}