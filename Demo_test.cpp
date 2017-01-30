// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    if(A.empty())    return -1;

    long long left = 0, right = 0; //allocate sufficient space for big number

    //take two boxes
    left = 0;  //assum that we will be check from left to right, so left sum will be equals to 0
    for(int i = 0; i < (int)A.size(); ++i) right += A[i]; //right sum will be equals to sum all numbers

    //check all candidate  for left to right side
    for(int i=0; i < (int)A.size(); i++) {
        right -= A[i]; //take candidate from box sum right
        if(left == right)        return i; //if now left sum equals to right sum return position of candidat
        left += A[i]; //if not than put this candidat to box, but to sum left
    }
    return -1; //if there are not any sum equals right to left side return -1
}

