//分别定义bool，char类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //定义bool

int main()
{
    printf("%d %d",sizeof(bool),sizeof(char));

    return 0;
}