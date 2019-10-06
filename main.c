#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[100];
    char Num;
    int cnt;
    
    
    while(fgets(str, sizeof(str), stdin)){
        if(Num>=0){
            str[cnt]=Num;
            cnt++;
        }
        elseif(Num<0){
        printf("%s", str[Num]);
        }
    }

    return 0;
}
