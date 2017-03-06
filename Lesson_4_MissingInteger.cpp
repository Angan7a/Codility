#include <set>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> B;
    set<int>::iterator its;
    for (int i = 0; i < (int)A.size(); i++) {
        if (A[i] > 0) {
            B.insert(A[i]);
        }
    }
    if (B.empty()) {
        return 1;
    }
    its = B.begin();
    for (int i = 1; its != B.end(); i++) {
        if (*its != i) {
           return i;
        }
        its++;
    }
    if (its == B.end()) {
        its--;
    }
    return (*its) + 1;
}
