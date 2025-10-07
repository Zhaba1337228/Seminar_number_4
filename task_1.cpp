#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Friend {
    string surname;
    string name;
    int a, b, c;
};

int main() {
    int n;
    cin >> n;
    vector<Friend> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].surname >> v[i].name >> v[i].a >> v[i].b >> v[i].c;
    }
    double s1 = 0, s2 = 0, s3 = 0;
    for (auto& f : v) {
        s1 += f.a;
        s2 += f.b;
        s3 += f.c;
    }
    double x1 = s1 / n, x2 = s2 / n, x3 = s3 / n;

    string out1 = to_string(x1);
    string out2 = to_string(x2);
    string out3 = to_string(x3);

    cout << out1.substr(0, out1.find('.') + 2) << " "
        << out2.substr(0, out2.find('.') + 2) << " "
        << out3.substr(0, out3.find('.') + 2);
}
