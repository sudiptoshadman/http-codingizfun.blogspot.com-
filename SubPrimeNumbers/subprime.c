#include<stdio.h>
int isPrime(int x);

int main(void){
    int num, divisionResult;
    scanf("%d", &num);//Taking input of n
    int count;
    for(count = 2; count<num; count++){//dividing n by prime numbers(3 to n) to find if any return prime
        if(isPrime(count) == 1){//if the current value of count is a prime number
            if(num%count == 0){//make sure num/count isn't a fraction
                divisionResult = (num/count);
                if(isPrime(divisionResult) == 1){//if num/count is also a prime number
                    printf("%d is a semiprime number", num);
                    break;
                }
            }
        }
    }
    return 0;
}

int isPrime(int x) {
    int i;
    for(i=2; i<=x/2; ++i){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
