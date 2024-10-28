#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingresa el numero a multiplicar: ";
    cin >> num;

    for (int num2 = 1; num2 <= 10; num2++) {
        cout << num << " * " << num2 << " = " << num * num2 << endl;
    }

    return 0;
}