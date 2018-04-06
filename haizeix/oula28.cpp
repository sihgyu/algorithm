#include "iostream"
#include "cinttypes"
#include "cstdio"
using namespace std;

int main()
{
    int64_t sum = 1,len = 3;
    while(len <= 1001)
    {
        sum += 4 * len * len + 6 * len + 6;
        len += 2;
    }

    printf("%" PRId64,sum);
}
