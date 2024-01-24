#include<iostream>
using namespace std;
void printStars(){
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
        cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printStars();
    return 0;
}