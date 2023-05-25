    #include <iostream>
    #include <string>
     
    using namespace std;
     
    int main(){
        int n;
        cin>>n;
        string a,b="";
        for(int i=0;i<n;i++){
            cin>>a;
            if(a.length() > 10){
                string tmp1(1,a[0]);
                string tmp2(1,a[a.length()-1]);
                b.append(tmp1);
                b.append(to_string((int)a.length()-2));
                b.append(tmp2);
            }
            else{
                b = a;
            }
            cout<<b<<endl;
            b="";
        }
    }