#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num; cin >> num;
    int sp = sqrt(num - 1);
    int middle = ((sp * sp + 1) + ((sp + 1) * (sp + 1))) / 2;
    int x = sp + 1, y = sp + 1 - abs(p - middle);
    if ((sp + 1) % 2) swap(x, y);
    if (num < middle) swap(x, y);
    cout << x << " " << y;
}
