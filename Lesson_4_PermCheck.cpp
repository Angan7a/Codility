#include <set>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> B;
    int j = 0;
    for (int i = 0; i < (int)A.size(); i++) {
        B.insert(A[i]);
    }
    for(set<int>::iterator it = B.begin(); it != B.end(); it++) {
        j++;
        if (*it != j) {
            return 0;
        }
    }
    return 1;
}
