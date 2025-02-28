#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define LINE_COUNT 37
#define MAX 1024
int main(){
    FILE *fp=fopen("rickroll.txt","r");
    if(fp==NULL){
        printf("FILE NOT FOUND!");
        exit(1);
    }
    char buffer[MAX];
    int count=0;
    while(fgets(buffer,MAX,fp)){
        if(count==0){
            printf("\033[H\033[J");
            fflush(stdin);
        }
        count++;
        printf("%s",buffer);
        if(count==LINE_COUNT){
            count=0;
            usleep(100000);
        }
    }

}