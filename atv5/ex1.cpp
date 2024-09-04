#include<iostream>
using namespace std;
int mult(int a,int b){
    return a*b;
}

int main(){
    int a,b,res;
    cin>>a;
    cin>>b;

    res=mult(a,b);
    cout << res << endl;
}