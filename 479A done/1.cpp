#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    cin>>a>>b>>c;

    int output(0);
    if(a == 1 && c == 1){output = a + b + c;}
    else if(a == 1 || (b == 1 && a < c)){output = (a + b) * c;}
    else if(c == 1 || (b == 1 && a >= c)){output = a * (b + c);}
    else{output = a * b * c;}

    cout<<output<<endl;

    return 0;

}