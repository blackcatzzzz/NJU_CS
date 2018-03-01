#include <iostream>
#include <stdio.h>

//#pragma pack(1)
/*
 * 自然边界大于n,则对齐边界为n;否则为自然边界。即取min(自然边界,n)
 *
 * linux 32位，对齐较为宽松，2字节数据以2字节对齐，其余4，8都以4字节对齐。结构体大小为min(结构体中最大有效对齐字节，4)的倍数
 *
 * windows,linux x86-64,皆以数据本身长度为自然边界。结构体大小为结构体中最大有效字节对齐的倍数
 *
 * 有效对齐节即min(自然边界,n)
 *
*/
struct s0
{
    char a;
    char c;
    char b;
    char d;
};

struct s1
{
    char a; // 1
    int c;  // 4
    short b;    // 8
    long long d;    // 12(32) | 16(64)
};

struct s2
{
    int i;
    int j;
    char c;
};

struct s3
{
    short a;
    short c;
    char b;
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    int *b[2][3];
    printf("sizeof(s0)=%d,sizeof(s1)=%d,\nsizeof(s2)=%d, sizeof(s3)=%d, sizeof(b)=%d\n",
           sizeof(s0),sizeof(s1),sizeof(s2), sizeof(s3),sizeof(b));

    return 0;
}