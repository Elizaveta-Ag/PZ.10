#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    int count = 0;
    cin >> N;
    
        for (int i = 2; i <= N; i+= 2) {
            count++;
    }
    cout << count;


    return 0;
}
