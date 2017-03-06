#include <math.h>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int sum = 0, min = 10000000, sum_l = 0, sum_r = 0;
    for (int i = 0; i < (int)A.size(); i++) {
        sum += A[i];
    }
    for (int i = 0; i < ((int)A.size() - 1); i++) {
        sum_l += A[i];
        sum_r = sum - sum_l;
        if (abs(sum_l - sum_r) < min) {
            min = abs(sum_l - sum_r);
        }
    }
    return min;
}
