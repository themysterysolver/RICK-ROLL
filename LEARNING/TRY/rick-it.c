#include <stdio.h>
#include <unistd.h>
#define FRAME_COUNT 999 

void display(int frame){
    char filename[50];
    sprintf(filename,"frames/frame%04d.txt",frame);

    FILE* fp=fopen(filename,"r");
    if(!fp){
        printf("NO FILE EXIST!");
    }
    printf("\033[H\033[J");
    char line[1000];
    while(fgets(line,sizeof(line),fp)){
        int start=0;
        while(line[start]!='.' && line[start]!=' ' && line[start]!='\0'){
            start++;
        }
        printf("%s",&line[start]);
    }
    fclose(fp);
}
int main(){
    for(int i=1;i<=FRAME_COUNT;i++){
        display(i);
        usleep(100000);
    }
}