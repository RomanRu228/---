#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int ROWS = 100;
    const int COLS = 200;

    float** arr = new float*[ROWS];

    for (int i = 0; i < ROWS; i++)
        arr[i] = new float[COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = -1.0f + static_cast<float>(rand()) / RAND_MAX * 2.0f;
        }
    }

    cout << "Массив успешно создан и заполнен." << endl;

    for (int i = 0; i < ROWS; i++)
        delete[] arr[i];

    delete[] arr;

    return 0;
}