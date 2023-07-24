#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int tmp;
    long sum=0;
    for(int i=0;i<n;i++){
        cin>>tmp;
        sum += tmp;
    }
    cout<<(double)sum/n<<endl;
    return 0;
}