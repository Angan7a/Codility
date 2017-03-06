#include <set>
int solution(vector<int> &A) {
    set<int> B;
    set<int>::iterator it;
    for (int i = 0; i < (int)A.size(); i++) {
        B.insert(A[i]);
    }
    it = B.begin();
    for (int i = 0; i < (int)B.size(); i++) {
        if (*it++ != (i + 1)) {
            return i + 1;
        }
    }
    return B.size() + 1;
}
