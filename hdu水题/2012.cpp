#include "iostream"
#include "cmath"
#include "cstdlib"

using namespace std;
int isPrime(int n)
{	
	float n_sqrt;
	if(n==2 || n==3) return 1;
	if(n%6!=1 && n%6!=5) return 0;
	n_sqrt=floor(sqrt((float)n));
	for(int i=5;i<=n_sqrt;i+=6)
	{
	    if(n%(i)==0 | n%(i+2)==0) return 0;
	}
        return 1;
} 
int main(){
    int x,y;
    int flag = 0;
    while(scanf("%d%d",&x,&y)!=EOF && (x!=0 || y!=0)){
        flag = 0;
        for(int i = x;i <= y;i++){
            if(isPrime(i * i + i + 41) == 0){
                flag = 1;
                printf("Sorry\n");
            }
            if(flag == 1){
                break;
            }
        }

        if(flag == 0){
            printf("OK\n");
        }
    }
    return 0;
}