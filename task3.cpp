#include <iostream>

using namespace std;

int main() {

    float epsilon = 1.0f;

    while (1.0f + epsilon / 2.0f > 1.0f)
        epsilon /= 2.0f;

    float zero = 1.0f;

    while (zero / 2.0f > 0.0f)
        zero /= 2.0f;

    cout << "Машинный эпсилон: " << epsilon << endl;
    cout << "Машинный ноль: " << zero << endl;

    return 0;
}