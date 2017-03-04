#include <set>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> tab;
    pair<set<int>::iterator,bool> ret;
    while (!A.empty()) {
        ret = tab.insert (A.back());
        if (ret.second == false) {
            tab.erase(A.back());
        }
         A.pop_back();
    }
     set<int>::iterator it = tab.begin();
    return *it;
}
