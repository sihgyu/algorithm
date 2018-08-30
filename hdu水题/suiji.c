#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const char *name[] =
    {
        "陈永健" ,
        "封喜昊" ,
        "庞泽麒" ,
        "高超" ,
        "耿艳红" ,
        "何禄双" ,
        "刘锦" ,
        "吴太龙" ,
        "张红军" ,
        "曹家伟" ,
        "张巍",
        "于世航",
        
    };
    int len = sizeof(name)/sizeof(name[0]);
    printf("len: %d\n",len);
    
    //乱序种子
    srand((unsigned)time(NULL));
    
    int last = len-1; // 最后一个元素的下标
    int i;
    for(i =0;i < len; i++)
    {
        int index = rand() % len; // 产生一个随机数作为数组下标
        const char *tmp = name[index];
        name[index] = name[last];
        name[last] = tmp;
        last--;
    }
    
    for(i = 0;i< len; i++)
    {
        if(i % 3 == 0)
            printf("\n");
        printf("%12s",name[i]);
    }
    
    printf("\n");
    return 0;
}