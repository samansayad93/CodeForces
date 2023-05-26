#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int max=0;
    int in,out;
    int currnt=0;
    for(int i=0;i<n;i++){
        cin>>out>>in;
        currnt = currnt - out + in;
        if(currnt > max){
            max = currnt;
        }
    }
    cout<<max<<endl;
}