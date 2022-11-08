#include <inttypes.h>
#include <stdio.h>


int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
int nprimes = sizeof(primes)/sizeof(primes[0]);


int64_t ways[100];
int main()
{
    ways[0] = 1;
    for(int i = 0; i < nprimes; i++){
        int p = primes[i];
        for(int j = p; j < 100; j++){
            ways[j]+=ways[j-p];
        }
    }

    for(int i = 0; i < 100; i++){
        printf("%3d: %20" PRId64 "\n", i, ways[i]);
    }
}