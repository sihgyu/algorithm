#include "iostream"
#include "cmath"
#include "cstdlib"
using namespace std;
int main(){
    int m;
    double n,sum;
    while(cin >> n >> m){
        sum = 0;
        for(int i = 0;i < m;i++){
            sum += n;
            n = sqrt(n);
        }
        printf("%0.2lf\n",sum);
    }
}