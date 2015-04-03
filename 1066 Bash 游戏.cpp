#include <iostream>
using namespace std;

/*
 * 51Nod - 1066 Bash 游戏
 * Type : Game Theory
 */
int main() {
    int num, n, k;
    cin >> num;
    while (num--) {
        cin >> n >> k;
        string res = ((n % (k + 1)) != 0) ? "A" : "B";
        cout << res << endl;
    }
}
