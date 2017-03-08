#include <set>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> B;
    for (unsigned i = 0; i < A.size(); i++) {
        B.insert(A[i]);
    }
    return B.size();
}
