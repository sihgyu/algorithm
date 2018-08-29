#include "iostream"
#include "cmath"
#include "cstdlib"

using namespace std;
int main(){
    int score;
    while(cin >> score){
        if(score <= 100 && score >= 90){
            cout << "A" << endl;
        }else if(score >= 80 && score <= 89){
            cout << "B" << endl;
        }else if(score >= 70 && score <= 79){
            cout << "C" << endl;
        }else if(score >= 60 && score <= 69){
            cout << "D" << endl;
        }else if(score >= 0 && score <= 59){
            cout << "E" << endl;
        }else{
            cout << "Score is error!" << endl;
        }
    }
    return 0;
}