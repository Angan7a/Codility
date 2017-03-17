int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max_ending = 0, max_slice = 0;
    for (unsigned i = 1; i < A.size(); i++) {
        if ((max_ending + A[i] - A[i - 1]) > 0) {
            max_ending = max_ending + A[i] - A[i - 1];
        } else {
            max_ending = 0;
        }
        if (max_ending > max_slice) {
            max_slice = max_ending;
        }
    }
    return max_slice;
}
