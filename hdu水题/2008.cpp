#include "iostream"
using namespace std;
int main(){
    int n;
    double a;
    int zheng ,ling ,fu ;
    while(cin >> n){
        zheng = ling = fu = 0;
        while(n--){
           cin >> a;
           if(a == 0){
               ling ++;
           }else if(a > 0){
               zheng ++;
           }else if(a < 0){
               fu ++;
           }
        
        }   
        cout << fu << " " << ling << " " << zheng << endl;
        
    }
}