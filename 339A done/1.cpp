#include <iostream>
#include <string>

using namespace std;

void sort(int arr[],int count){
    for(int i=0;i<count;i++){
        for(int j=i;j<count;j++){
            if(arr[i]>arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main(){
    string a;
    int arr[100],count=0;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i] == '+'){
            continue;
        }
        arr[count] = a[i]-48;
        count++;
    }
    sort(arr,count);
    for(int i=0;i<count;i++){
        cout<<arr[i];
        if(i!=count-1){
            cout<<"+";
        }
    }
    cout<<endl;
}