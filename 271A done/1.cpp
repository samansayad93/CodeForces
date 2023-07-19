#include <iostream>

using namespace std;

bool isBeatiful(int n){
    int a = n %10;
    int b = (n / 10)%10; if(b == a){return 0;}
    int c = (n / 100) % 10; if(c == a || c == b){return 0;} 
    int d = (n / 1000) % 10; if(d == a || d == b || d == c){return 0;}
    return 1;
}

int main(){
    int n;
    cin>>n;
    while(!isBeatiful(++n)){

    }
    cout<<n<<endl;
    return 0;
}