

#include <set>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> B;
    pair<set<int>::iterator,bool> ret;
    set<int>::iterator it;
    int sum = 0;

    for (int i = 0; i < (int)A.size(); i++) {
        ret = B.insert(A[i]);
        sum += A[i];
        if (ret.second == false) {
            return 0;
        }
    }
    it = (B.end())--;
    if (sum == (*it * (*it+1)/2)) {
        return 1;
    } else {
        return 0;
    }
}


