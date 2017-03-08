int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int i;
    if (B == 0) {
        return 1;
    }
    if (B < K) {
        return 0;
    }
    if (A == B) {
        if (B % K == 0) {
            return 1;
        } else {
            return 0;
        }
    }
    for (i = A; (i % K) != 0; i++) {
    }
    if (i > B) {
        return 0;
    }
    return ((B - i) / K) + 1;
    }
