#include <stdio.h>

int isPrime(int num) //�Ҽ����� �Ǻ��Ѵ�.
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

    for (int i = 0; i <= 100; ++i) { //0���� 100������ ���� �߿��� �Ҽ��� ã�� ���Ѵ�.
        if (isPrime(i)) {
            sum += i;
        }
    }

    printf("0���� 100������ ���� �߿��� �Ҽ��� ���� ��: %d\n", sum); //��� ���� ����Ѵ�.

    return 0;
}