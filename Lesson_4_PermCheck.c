

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int *tab, *tab_b;
    int max = 0, max_b = 0, c;
    tab = (int *)calloc(100000000+1,sizeof(*tab));
    tab_b = (int *)calloc(10+1,sizeof(*tab_b));
    for (int i = 0; i < N; i++) {
        if (A[i] > 100000000) {
            c = A[i]/100000000;
            tab_b[c] = 1;
            if (c > max_b) {
                max_b = c;
            }
        } else {
            tab[A[i]] = 1;
            if (A[i] > max) {
                max = A[i];
            }
        }
    }
    for (int i = 1; i <= max; i++) {
        if (!tab[i]) {
            return 0;
        }
    }
    if (max_b) {
        for (int i = 1; i <= max_b; i++) {
            if (!tab_b[i]) {
                return 0;
            }
        }
    }
    return 1;
}


