#include "iostream"
#include "cstdio"
#include "cinttypes"

using namespace std;
int64_t num = 600851475143,flag;
int main(){
    for (int64_t i = 2;i*i <= num;i++){
        if(num % i) continue;
        flag = i;
        while(num % i == 0 ) // 回文数
            num /= i;
    }

    if(num > flag)
        flag = num;
    printf("%"PRId64 "\n",flag);
    return 0;
        
}
