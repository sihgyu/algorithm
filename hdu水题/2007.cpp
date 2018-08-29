#include "iostream"
using namespace std;
int main(){
    int m,n;
    int tmp;
    int jinum = 0,ounum = 0;
    while(cin >> m >> n){
        if(m > n){
            tmp = m;
            m = n;
            n = tmp;
        }
        for(int i = m;i <= n ;i++){
            if(i%2 == 0){
                ounum += i*i;
            }else{
                jinum += i*i*i;
            }
        }
        cout << ounum << " " << jinum << endl;
        ounum = 0;
        jinum = 0;
    }
}