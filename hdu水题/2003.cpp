#include "iostream"
#include "cmath"
#include "cstdlib"
using namespace std;
int main(){
    double a;
    while(cin >> a){
        printf("%0.2lf\n",fabs(a));
    }
    return 0;
}