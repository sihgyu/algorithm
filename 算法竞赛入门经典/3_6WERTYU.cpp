#include "iostream"
#include "cstdio"
using namespace std;
char a[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(){
    int i,c;
    while ((c = getchar())!=EOF){
        for(i = 1; a[i];i++){
            if(c == a[i]){
                break; // 在字符串中寻找c 如果相等就保留下标，在下面处理
            }     
        }
        if(a[i]){
            cout << a[i-1] ;
        }
        else{
            cout << a[i] ;
        }
    }
    return 0;
}