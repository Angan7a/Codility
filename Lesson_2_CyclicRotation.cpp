vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> B;

    if (A.empty()) {
        return A;
    }
    K %= A.size();
    for (int i = A.size() - K; i < (int)A.size(); i++) {
        B.push_back(A[i]);
    }
    for (int i = 0; i < (int)A.size() - K; i++) {
        B.push_back(A[i]);
    }
    return B;
}
