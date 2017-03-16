int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int size = 0;
    int value = 0;
    int count = 0;
    int indices = 0;
    for (int i = 0; i < (int)A.size(); i++) {
        if (size == 0) {
            size++;
            value = A[i];
        } else {
            if (A[i] == value)
                size++;
            else
                size--;
        }
    }

    for (int j = 0; j < (int)A.size(); j++) {
        if (A[j] == value) {
             count++;
        }
    }

    if (count <= ((int)A.size() / 2)) {
        return 0;
    } else {
        size = 0;
        for (int k = 0; k < ((int)A.size() - 1); k++) {
            if (A[k] == value){
                count--;
                size++;
            }
            if ((size > ((k+1)/2)) && (count > ((int)A.size()-(k+1))/2 )) {
                indices++;
            }
        }
        return indices;
    }
}
