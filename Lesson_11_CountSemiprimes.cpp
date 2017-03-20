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
    for (int i = 0; i < (int)P.size(); i++) {
        z = 0;
        for (int j = P[i]; j <= Q[i]; j++) {
            if (s_prime[j]) {
                z++;
            }
        }
        output.push_back(z);
    }
    return output;
}
