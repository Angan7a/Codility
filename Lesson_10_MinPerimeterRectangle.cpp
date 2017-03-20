int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int min_p = 2 * (1 + N);
    int i = 2, z;
    while (i * i <= N) {
        if (N % i == 0) {
            z = 2 * (i + N / i);
            if (z < min_p) {
                min_p = z;
            }
        }
        i++;
    }
    return min_p;
}
