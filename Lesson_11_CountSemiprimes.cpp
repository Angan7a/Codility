vector<int> solution(int N, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    vector <int> prime, prime1, s_prime, output;
    int i = 2, k, z;

    for (int j = 0; j < N + 1; j++) {
        prime.push_back(1);
        s_prime.push_back(0);
    }
    //finding primes numbers
    prime[0] = prime[1] = 0;
    while (i * i <= N) {
        if (prime[i]) {
            k = i * i;
            while (k <= N) {
                prime[k] = 0;
                k += i;
            }
        }
        i++;
    }
    //put primes numbers in to 1 vetor
    for (int j = 0; j < N + 1; j++) {
        if (prime[j]) {
            prime1.push_back(j);
        }
    }
    //find semiprimes
    for (int i = 0; i < (int)prime1.size(); i++) {
        for (int j = 0; j < (int)prime1.size(); j++) {
            if (prime1[i] * prime1[j] <= N) {
                s_prime[prime1[i] * prime1[j]] = 1;
            } else {
                break;
            }
        }
    }
    //count semiprimes in range
    z = 0;
    for (int i = 0; i < (int)s_prime.size(); i++) {
        if (s_prime[i] == 1) {
            z++;
        }
        s_prime[i] = z;
    }
    for (int i = 0; i < (int)P.size(); i++) {
        z = s_prime[Q[i]] - s_prime[P[i] - 1] ;
        output.push_back(z);
    }
    return output;
}


