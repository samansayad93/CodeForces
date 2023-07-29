#include <iostream>
#include <vector>

using namespace std;

int main(){
    int numTeams;
    cin>>numTeams;
    int host = 0, guest = 0;
    vector<pair<int,int>> colors;
    for(int k = 0; k < numTeams; k++){
        cin>>host>>guest;
        colors.push_back(pair<int,int>(host,guest));
    }
    int total = 0;
    for(int a = 0; a < numTeams - 1; ++a){
        for(int b = a + 1; b < numTeams; ++b){
            if(colors[a].first == colors[b].second){++total;}
            if(colors[a].second == colors[b].first){++total;}
        }
    }
    printf("%d\n",total);
    return 0;
}