#include <iostream>
#include <cmath>

using namespace std;

double getH(double a, double b, int n) {
    return (b - a) / n;
}

double getFx(double x) {
    return pow(x, 3) - 5 * x;
}

double getXi(double x, double h) {
    return x + h;
}

double calculateIntegral(double a, double b, double n) {
    double xi = 0, nextXi = 0;
    double result = 0, h = getH(a, b, n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            xi = a;
        } else {
            xi = getXi(xi, h);
        }

        nextXi = getXi(xi, h);

        result += (h / 2) * (getFx(xi) + getFx(nextXi));
    }

    return result;
}

int main(int argc, char const *argv[]) {

    int n;
    double a, b;

    cin >> n >> a >> b;

    cout << calculateIntegral(a, b, n) << endl;

    return 0;
}
