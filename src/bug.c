#include <stdio.h>

void crash()
{
    int *ptr = NULL;
    *ptr = 42; // 空指针解引用，导致段错误
}

int main()
{
    printf("程序启动...\n");
    int a = 1;
    a = 2;
    a = 3;
    crash();
    return 0;
}