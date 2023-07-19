#include <iostream>

using namespace std;

int main(){
    int num,sec;
    cin>>num>>sec;
    string q;
    cin>>q;
    while (sec--)
    {
        int index = num-1;
        while(index >= 0){
            index--;
            if(q[index] == 'B' && q[index+1] == 'G'){
                q[index] = 'G';
                q[index+1] = 'B';
                index--;
            }
        }
    }
    cout<<q<<endl;
    return 0;
}