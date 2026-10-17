
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    for (int i = 0; i < n; i++) {
        int x = arr[i];

        if (x > first) {
            third = second;
            second = first;
            first = x;
        }
        else if (x < first && x > second) {
            third = second;
            second = x;
        }
        else if (x < second && x > third) {
            third = x;
        }
    }

    if (third == INT_MIN) {
        cout << "No third largest distinct element";
    } else {
        cout << third;
    }

    return 0;
}
