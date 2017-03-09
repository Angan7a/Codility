#include <set>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    multiset<int> B;
    multiset<int>::iterator it_max, it_min;
    int max_3, max_1_min_2;
    int m1,m2,m3;
    int z1,z2,z3;
    for (unsigned i = 0; i < A.size(); i++) {
        B.insert(A[i]);
    }
    it_max = B.end();
    max_3 = *(--it_max) * *(--it_max) * *(--it_max);

    it_max = B.end();
    it_min = B.begin();
    max_1_min_2 = *(--it_max) * *(it_min) * *(++it_min);

    if (max_1_min_2 > max_3 ) {
        return max_1_min_2;
    } else {
        return max_3;
    }
}

