#include <iostream>
using namespace std;

/*
 * 51Nod - 1067 Bash 游戏 V2
 * Type : Game Theory
 */
 
int main() {
    int num, n;
    cin >> num;
    while (num--) {
        cin >> n;
        string res = ((n % 7) == 0 || (n % 7) == 2) ? "B" : "A";
        cout << res << endl;
    }
}
