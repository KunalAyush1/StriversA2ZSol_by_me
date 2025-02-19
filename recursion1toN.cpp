#include<iostream>
using namespace std;
int count =0;
int i;
void f(int i,int n){
    if(i>n)
    return;
    cout<<i<<"\n";
    f(i+1,n);
    
}
int main(){
    int n;
    cin>>n;
    f(1,n);
    return 0;
}
    