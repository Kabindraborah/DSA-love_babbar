#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the parameters n ";
    cin>>n;

    int i = 1;

    while (i<=n){
        
        int j =1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
            }
}