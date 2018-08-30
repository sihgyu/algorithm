#include "iostream"
#include "cstdlib"
#include "cmath"

using namespace std;

int main(){
    int m,n;
    int flag = 0;
    while(cin >> m >> n){
        for(int i = m;i <= n;i++){
            if((pow(i/100,3)+pow(i%100/10,3)+pow(i%10,3)) == i){
                if(flag != 0){
                    cout << " "<<i;
                }
                else{
                    cout << i ;   
                }
                flag = 1;
            }
        }
        if(flag == 0){
            cout << "no" << endl;
        }
    }
}