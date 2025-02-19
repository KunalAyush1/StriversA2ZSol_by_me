#include<iostream>
using namespace std;

//backtracking
int i;
void fun(int i,int n){
if(i<1)
return;
fun(i-1,n);
cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
fun(n,n);
return 0;
}