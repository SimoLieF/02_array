#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    char Num[100][5];
    int arrayNum;
    
    
    while(fgets(str, sizeof(str), stdin)){
        if(str>="0"){
            Num[cnt]=str;
        }
        else if(str<"0"){
            arrayNum=ctoi(str)*(-1);
        printf("%s", Num[arrayNum]);
    }

    return 0;
}
