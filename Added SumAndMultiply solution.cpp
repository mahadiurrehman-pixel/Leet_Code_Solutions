#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
        string str = to_string(n);
        string a = "";
        long long sum = 0;

        for (int i = 0; i < str.length(); i++) {
            sum += (str[i] - '0');
            if (str[i] != '0') {
                a += str[i];
            }
        }

        if (a == "") return 0;

        long long num = stoll(a);
        return num * sum;
    }
};

int main() {
    Solution sol;
    cout << sol.sumAndMultiply(1052) << endl;
    return 0;
}