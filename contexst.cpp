#include <iostream>
using namespace std;

int chocolate_get(int x) {
    if (x < 3) {
        return 0; 
    }
    int wrap = x / 3; 
    int add_choco = wrap; 
    return add_choco + chocolate_get(wrap);
}

int main() {
    int T;
    cin >> T;
    int N[T]; 
    for (int i = 0; i < T; i++) {
        cin >> N[i];
    }
    cout<<endl;
    for (int i = 0; i < T; i++) {
        if (N[i] > 5) {
            int x = N[i] / 5;
            int total_chocolates = x + chocolate_get(x);
            cout << total_chocolates << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}