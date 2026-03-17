#include <iostream>
#include <math.h>
using namespace std;


int main(){

    long long int N;
    long long int c;
    long long int r_terbaik = 1;
    cin >> N;
    
    long long int c_terbaik = N;
    for(long long int r = 1; r <= sqrt(N); r++){
        if(N%r == 0){
            c =N/r;
            if(r<=c){
            if((c - r) < (c_terbaik - r_terbaik)){
                r_terbaik = r;
                c_terbaik = c;
            }
        }
            
        }
    }

    cout << r_terbaik << " " << c_terbaik << endl;


}