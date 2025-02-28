#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define FILE_COUNT 16667
void display(int frame){
    char file_name[100];
    sprintf(file_name,"FRAMES/txt%06d.txt",frame);

    FILE *fp=fopen(file_name,"r");
    if(!fp){
        printf("NO FILE EXIST!");
        exit(0);
    }
    printf("\033[H\033[J");

    char line[1000];
    while(fgets(line,sizeof(line),fp)){
        printf("%s",line);
    }
    fclose(fp);
}
int main(){
    for(int i=1;i<FILE_COUNT;i++){
        display(i);
        usleep(100000);
    }
}