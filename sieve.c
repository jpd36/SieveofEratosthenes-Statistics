//#Jonathan Pham
//#cs2750 
//#03/06/18

#include <stdio.h>
#include <stdlib.h>
 
#define limit 100001 
 
int main(){
    unsigned long long int i,j;
    int *primenum;
    int x = 1; 
 
    primenum = malloc(sizeof(int) * limit);
 
    for (i = 2;i < limit; i++)
        primenum[i] = 1;
 
    for (i = 2;i < limit; i++)
        if (primenum[i])
            for (j = i;i * j < limit; j++)
                primenum[i * j] = 0;
 
    printf("\nPrime numbers in range 1 to 100000 are: \n");
    for (i = 2;i < limit; i++)
        if (primenum[i])
            printf("%d\n", i);
 
return 0;
}
