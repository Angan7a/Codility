#include <set>


int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    multiset<int> B;
    multiset<int>::iterator i_end;

    for (unsigned i = 0; i < A.size(); i++) {
        B.insert(A[i]);
    }
    if (B.size() < 3) {
        return 0;
    }
    i_end = B.end();
    i_end--;
    i_end--;
    for (multiset<int>::iterator it = B.begin(); it != i_end; it++) {
        if ((*it + *(++it)) > *(++it)) {
            return 1;
        }
        it--;
        it--;
    }
    return 0;
}
