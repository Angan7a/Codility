#include <set>
int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> B;
    pair<set<int>::iterator,bool> ret;
    int sum = 0;
    for (int i = 0; i < (int)A.size(); i++) {
        ret = B.insert(A[i]);
        if (ret.second == true) {
            sum += A[i];
        }
        if (sum == (X * (X + 1) / 2)) {
            return i;
        }
    }
    return -1;
}
