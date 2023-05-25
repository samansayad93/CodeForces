    #include <iostream>
     
    using namespace std;
     
    int main(){
        int n;
        cin>>n;
        for(int i=2;i<=n/2;i++){
            if(i%2 == 0 && (n-i)%2==0){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }