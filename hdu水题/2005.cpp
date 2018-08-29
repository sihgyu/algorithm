#include "iostream"
#include "cstdlib"
using namespace std;
int mon[] = {31,28,31,30,31,30,31,31,30,31,30};
int main(){
    int year,month,day;
    while(scanf("%d/%d/%d",&year,&month,&day)!=-1){
        int num = 0;
        for(int i = 0;i < month-1;i++){
            num += mon[i];
        }
        num += day;
        if(((year%4==0 && year%100!=0)||(year%400==0)) && month >2){
            num++;
        }
        printf("%d\n",num);
    }
}