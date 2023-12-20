#include <iostream>
using namespace std;

int main() {
    int N, i;
    cout << "Enter a Positive Integer: "<<endl;
    cin >> N;

    for (; N > 1; N--) {
        for (i = 2; i * i <= N; i++) {
            if (N % i == 0)
                break;
        }
        if (i * i > N) {
            cout << "The Largest Prime Number less than or equal to your input number is : " <<endl<< N << endl;
            return 0;
        }
    }
    cout << "There are no prime numbers less than or equal to your number." << endl;
    return 0;
}
