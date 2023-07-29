#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    cout << "Enter elements: " << endl;
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }

    int ans = 0; 

    for (int i = 0; i < a.size(); i++) {
        ans = ans ^ a[i]; // XOR the current element with ans
    }

    cout << ans << " ";

}

