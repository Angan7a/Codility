int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max_slice = A[0];
    int max_ending = A[0];
    for (unsigned i = 1; i < A.size(); i++) {
        if (max_ending + A[i] > A[i]) {
            max_ending += A[i];
        } else {
            max_ending = A[i];
        }
        if (max_ending > max_slice) {
            max_slice = max_ending;
        }
    }
    return max_slice;
}
