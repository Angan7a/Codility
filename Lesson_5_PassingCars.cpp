int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max = 0, ile = 0, sum = 0, p;
    for (int i = 0; i < (int)A.size(); i++) {
        if (A[i] == 0) {
            sum += max;
            ile++;
        } else {
            max++;
        }
    }
    p = max * ile - sum;
    if (p > 1000000000 || p < 0) {
        return -1;
    }
    return p;
}
