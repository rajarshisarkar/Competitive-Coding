/* Solution: O(length(S)^2)

   For each position i (regardless it is letter or digit) we find minimum L and maximal R so that S[L..i - 1] and S[i + 1..R] contain only digit.
   If S[i] is a letter, replace it with 9 and update the result.
*/
#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

//return true iff a > b
bool better(string a, string b) {
    while (a.size() < b.size()) a = "0" + a;
    while (b.size() < a.size()) b = "0" + b;

    return a > b;
}

int main() {
    string s;
    string result = "0";

    cin>> s;
    for (int i = 0; i < s.size(); i++) {
        int l, r;
        l = r = i;
        for (int j = i + 1; j < s.size(); j++) {
            if (!isdigit(s[j])) break;
            r = j;
        }

        for (int j = i - 1; j >= 0; j--) {
            if (!isdigit(s[j])) break;
            l = j;
        }

        string t = s.substr(l, r - l + 1);
        //replace s[i] by 9 if it is a letter
        for (int j = 0; j < t.size(); j++)
            if (!isdigit(t[j])) t[j] = '9';
        if (better(t, result)) result = t;
    }

    while (result.size() > 1 && result[0] == '0')
        result.erase(result.begin());

    cout << result << endl;
    return 0;
}
