#include "iostream"
#include "cmath"
#include "cstdlib"
#include <iomanip>
using namespace std;
int main(){
    int m,n;
    double num;
    while(cin >> m){
        while(m--){
            num = 0;
            cin >> n;
            for(int i = 1;i <= n;i++){
                num += pow(-1,i-1)/i;
            }
            printf("%0.2lf\n",num);
        }
    }
    return 0;
}