int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int ilosc_pow = 0;
    int licznik = 0;
    int candidate;
    int index;
    if (!A.size()) return -1;
    for (int i = 0; i < (int)A.size(); i++) {
        if (ilosc_pow == 0) {
            candidate = A[i];
            ilosc_pow++;
            index = i;
        } else if (candidate != A[i]) {
            ilosc_pow--;
        } else {
            ilosc_pow++;
        }
    }
    if (ilosc_pow > 0) {
        for (int i = 0; i < (int)A.size(); i++) {
            if (candidate == A[i]) {
                licznik++;
            }
        }
        if (licznik > (int)(A.size() / 2)) {
            return index;
        } else {
            return -1;
        }
    } else {
        return -1;
    }
}


