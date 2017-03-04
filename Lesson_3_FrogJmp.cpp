int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int ile;
    ile = (Y - X) / D;
    if ((Y -X) % D == 0) {
        return ile;
    } else {
        return ile + 1;
    }
}
