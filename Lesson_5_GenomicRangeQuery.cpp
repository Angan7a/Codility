vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> A, C, G, T, B;
    int a = 0, c = 0, g = 0, t = 0;
    int za = 0, zc = 0, zg = 0, zt = 0, w;

    for (int i = 0; i < (int)S.length(); i++) {
        if (S[i] == 'A') {
            a += 1;
            za = a + 1;
        }
        if (S[i] == 'C') {
            c += 1;
            zc = c + 1;
        }
        if (S[i] == 'G') {
            g += 1;
            zg = g + 1;
        }
        if (S[i] == 'T') {
            t += 1;
            zt = t + 1;
        }
        A.push_back(a);
        a = za;
        C.push_back(c);
        c = zc;
        G.push_back(g);
        g = zg;
        T.push_back(t);
        t = zt;
    }
    for (int i = 0; i < (int)P.size(); i++) {
        if (Q[i] == P[i]) {
            if (S[Q[i]] == 'A') {
                w = 1;
            } else if (S[Q[i]] == 'C') {
                w = 2;
            } else if (S[Q[i]] == 'G') {
                w = 3;
            } else {
                w = 4;
            }
            B.push_back(w);
        } else {
            if (A[Q[i]] - A[P[i]] > 0) {
                w = 1;
            } else if (C[Q[i]] - C[P[i]] > 0) {
                w = 2;
            } else if (G[Q[i]] - G[P[i]] > 0) {
                w = 3;
            } else {
                w = 4;
            }
            B.push_back(w);
        }
    }
    return B;
}
