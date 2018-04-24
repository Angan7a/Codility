// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    for(unsigned int i = 0; i < A.size(); i++) {
        if (A[i] == A[i+1]) {
            i++;
        } else {
            return A[i];
        }
    }
    // write your code in C++14 (g++ 6.2.0)
    return -1;
}
