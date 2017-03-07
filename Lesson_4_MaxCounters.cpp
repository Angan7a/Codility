vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max = 0, last_max = 0;
    vector<int> B(N,0);

    for (int i = 0; i < (int)A.size(); i++) {
        if (A[i] == N + 1) {
                last_max = max;
        } else {
            if (B[A[i] - 1] < last_max) {
                B[A[i] - 1] = last_max + 1;
            } else {
                B[A[i] - 1]++;
            }
            if (B[A[i] - 1] > max) {
                max = B[A[i] - 1];
            }
        }
    }
    for (int j = 0; j < N; j++) {
        if (B[j] < last_max) {
            B[j] = last_max;
        }
    }
    return B;
}
