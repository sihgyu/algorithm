#include "iostream"
#include "cstdlib"
#define PI 3.1415927
using namespace std;
int main(){
    double r;
    while(cin >> r ){
        printf("%0.3lf\n",(4.0 / 3.0)* PI * r * r * r);        
    }
    return 0;
}
