#include <stdio.h>

int isPrime(int num) //소수인지 판별한다.
{
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() 
{
    int sum = 0;

    for (int i = 0; i <= 100; ++i) { //0부터 100까지의 숫자 중에서 소수를 찾고 더한다.
        if (isPrime(i)) {
            sum += i;
        }
    }

    printf("0부터 100까지의 숫자 중에서 소수들 만의 합: %d\n", sum); //결과 값을 출력한다.

    return 0;
}