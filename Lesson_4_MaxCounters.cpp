vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max = 0;
    vector<int> B;
    for (int i = 0; i < N; i++) {
        B.push_back(0);
    }
    for (int i = 0; i < (int)A.size(); i++) {
        if (A[i] == N + 1) {
            for (int j = 0; j < N; j++) {
                B[j] = max;
            }
        } else {
            B[A[i] - 1] += 1;
            if (B[A[i] - 1] > max) {
                max = B[A[i] - 1];
            }
        }
    }
    return B;
}
