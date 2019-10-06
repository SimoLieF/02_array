#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    char Num[100][5];
    int cnt;
    
    
    while(fgets(str, sizeof(str), stdin)){
        if(str>="0"){
            Num[cnt]=str;
            cnt++;
        }
        else if(str<"0")
        printf("%s", Num[str]);
    }

    return 0;
}
