#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    char Num[100][5];
    int arrayNum;
    int cnt=0;
    
    
    while(fgets(str, sizeof(str), stdin)){
        if(atoi(str)>0){
            sprintf(Num[cnt],"%s",str);
            cnt++;
        }
        else if(atoi(str)<0){
            arrayNum=atoi(str)*(-1);
            printf("%s", Num[arrayNum]);
        }
    }

    return 0;
}
