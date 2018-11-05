#include <stdio.h>

struct quque_item{
    int data;
    quque_item *next;
    
};
struct quque{
    quque_item *first;
};

int main(int argc, char *argv[]) 
{
    char str[7];
    quque q;
    q.first = nullptr;
    
    while(fgets(str, sizeof(str), stdin)){
        int in = atoi(str);
        
        switch(in){
            case 0:
                // 表示
                break;
            case -1:
                // 取り出し
                break;
            default:
                // 追加
                break;
                    
        }
        
        printf("%s", str);
    }

    return 0;
}
