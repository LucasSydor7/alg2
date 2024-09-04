#include <iostream>
using namespace std;

int mult(int *a, int *b){
    return (*a) * (*b);
}

int main(){
    int x,y;

    cin >> x >> y;
    int *a = &x;
    int *b = &y;

    cout << mult(a,b) << endl; 
}
