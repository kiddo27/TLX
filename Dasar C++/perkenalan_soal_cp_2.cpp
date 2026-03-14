#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N;
    cin >> N;
    vector <long long int> A;
    long long int jumlah = 0;   //karena di soal ada batasan 0 < Ai < 10^8, kalau pakai int doang ga cukup

    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        A.push_back(x);
    }

    for(int i = 0; i < N; i++){

        jumlah = jumlah + A[i];
    }

    for(int i = 0; i < N; i++){
        cout << jumlah - A[i] << endl;
    }


}