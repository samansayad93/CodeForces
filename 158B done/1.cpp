#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long numGroups;
    cin>>numGroups;
    long groups[5] = {0};
    long temp; 
    do{
        cin>>temp;
        ++groups[temp];
    }while(--numGroups);

    long total = groups[4];
    total += groups[3]; 
    groups[1] -= groups[3];
    total += groups[2]/2 + groups[2]%2; 
    groups[1] -= 2 * (groups[2] % 2);
    if(groups[1] > 0){
        total += groups[1]/4 + (groups[1]%4 > 0);
    }

    cout<<total<<endl;
    return 0;
}