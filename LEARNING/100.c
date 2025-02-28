#include <stdio.h>
#include <unistd.h>
int main(){
    for(int i=1;i<=20;i++){
        printf("\033[H\033[J");
        printf("%d",i);
        sleep(1);
    }
}