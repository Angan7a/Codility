// you can use includes, for example:
// #include <algorithm>
#include <vector>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {

    vector <int> tab;
    int ile = 0, ile_before = 0;
    //change number to binary and put it to vector
    while(N)
    {
        tab.push_back(N%2);
        N/=2;
    }
    //erase 0 from end binary namber
    while(tab.front() == 0) tab.erase(tab.begin());
    //count 0's between 1's 
    for(int i = 0; i < (int)tab.size(); i++)
    {
        if( tab[i] == 1 )
        {
            if( ile >= ile_before)
            {
                ile_before = ile;
                ile = 0;
            }else ile = 0;
        }else
        {
            ile++;
        }
    }
    return ile_before;
}


