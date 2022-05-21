/*
 1부터 n까지, 1부터 m까지 숫자가 적힌
 서로 다른 주사위 2개를 던졌을 때 나올 수 있는 모든 경우를 출력해보자.

 참고
 중첩의 원리...
 반복 실행 구조도 조건 실행 구조와 마찬가지로 중첩의 원리가 적용된다.
 반복 실행 구조를 중첩하면 원하는 반복 구조를 다양하게 만들어 낼 수 있다.
 */

#include <stdio.h>

int main(void) {
    int i, j;
    int n, m;
    scanf("%d %d", &n, &m);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%d %d\n", i+1, j+1);
        }
    }
}
