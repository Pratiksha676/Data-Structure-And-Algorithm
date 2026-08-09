#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    // code here
     int ans = max(a, max(b, c));

    cout << ans;

    return 0;
}
