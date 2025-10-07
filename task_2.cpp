#include <iostream>
using namespace std;

int main() {
    long long N;
    if (!(cin >> N)) return 0;

    double* p = NULL;
    p = new double(static_cast<double>(N));

    double** pp = &p;

    cout << **pp;

    delete p;
    p = NULL;
    return 0;
}
