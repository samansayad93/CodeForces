#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){

    std::vector<long> d; d.push_back(100); d.push_back(20); d.push_back(10); d.push_back(5); d.push_back(1);

    long n;
    cin>>n;
    long cnt(0);
    for(long p = 0; p < d.size(); p++){cnt += (n / d[p]); n %= d[p];}
    cout<<cnt<<endl;

    return 0;
}