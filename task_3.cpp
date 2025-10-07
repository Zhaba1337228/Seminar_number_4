#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double* arr = new double[n];
    for (int i = 0; i < n; ++i) arr[i] = i + 1;

    for (int i = 0; i < n; ++i) {
        int j = i + (i * 37 + 13) % (n - i);
        double tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) sum += arr[i];

    cout << sum;

    delete[] arr;
    return 0;
}
