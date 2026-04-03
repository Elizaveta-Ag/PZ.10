#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        for (int v = 0; v < N; ++v){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
