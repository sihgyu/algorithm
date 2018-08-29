#include "iostream"
using namespace std;
int main(){
    int n,a,num = 1;
    while(cin >> n){
        while(n--){
            cin >> a;
            if(a%2==1 || a == 1){
                //cout << a << endl;
                num *= a;
                //cout << num << endl;
            }
        }
        cout << num << endl;
        num = 1;
    }
}