#include "iostream"
#include "cmath"

using namespace std;
int main(){
    int n,a[31];
    a[1] = 1;
    for(int i = 2;i < 31;i++){
        a[i] = a[i-1] * 2 + 2;
    }
    while(cin >> n){
        cout << a[n] << endl;
    }
}