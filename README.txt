[50pt] Sieve of EratosthenesThe Sieve of Eratosthenesis  a fast method to determine  all primes less  than  or equal to a  given number N. The method proceeds as follows. Initially, we write down all the integers from 2 to N. We start with the first prime, P = 2. After finding each new prime P (initially, P = 2), we cross out all multiples of P starting with 2 × P from the list of numbers; this can be easily done by crossing out every Pth entry starting from the number 2 × P (but only considering the numbers up to N). Then, P is incremented to the next non-crossed-out integer. Again, we cross out all multiples of P starting with 2 ×P and increment P to the next non-crossed-out number. We repeat these steps until 푃>√푁. The numbers that have not been crossed out in the end represent all prime numbers smaller than or equal to N. Write a program for N = 100,000. At the end, the program should print out all primes up to N =100,000.You should use an integer array (of size 100,001 or so) to store the status (crossed out or not) of all integers. For example, the array may be declared asint sieve[100001]make sure you initialize all elements of the array properly to avoid problems. Your output should start with the following sequence (to help you check your code):
2
3
5
7
11
13
17
19
23
29
31
37
41
The output should end with sequence (for N =100,000):
99829
99833
99839
99859
99871
99877
99881
99901
99907
99923
99929
99961
99971
99989
99991

The code should work very fast (should complete in less than a second), if it has been done correctly.On my laptop, the code takes about 0.046 seconds overall.

2. [50pt] statisticsThe main.cis shown below://main.c#include <stdio.h>#include <stdlib.h>#include "avg.h"#include "sum.h"#define N 10
int main(){int i;float a[N];srand(123);for (i=0; i <N; i++) {a[i] = ((double) rand())/RAND_MAX;printf("%.2f ",a[i]);}printf("\n\n");printf("average: %.2f\n",avg(a,N));printf("sum: %.2f\n",sum(a,N));return 0;}

Extend the code by adding a function maximumthat computesthe maximum of the input array, a function minimumthat computes the minimum of the input array, a function average that computes the average of the input array and a sum function that computes the sum of the input array.The function for the minimum should be located in file min.c(with the header file min.h); the function for the maximum should be located in file max.c (with the header filemax.h);the function for the sumshould be located in file sum.c (with the header filesum.h)and the function for the averageshould be located in file avg.c (with the header fileavg.h). After implementing these fourfunctions, extend the code forthe main function to also print out the maximum and minimum. 

Example output:0.21 0.69 0.78 0.40 0.53 0.10 0.64 0.35 0.72 0.03
average: 0.44
sum:4.44
max:0.78
min:0.03

The final code should thus be split into the following source and header files:
main.c 
avg.c
avg.h
sum.c
sum.h
min.c
min.h
max.c
max.h
