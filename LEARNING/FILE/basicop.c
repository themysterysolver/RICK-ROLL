#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 1024
bool check(FILE *fp){
    if(fp==NULL){
        printf("NO FILE");
        exit(1);
    };
    return true;
}
void abt_fscanf(){
    FILE *fp=fopen("sample.txt","r");
    if(check(fp));
    char c[100];
    while(fscanf(fp,"%s",c)==1){
        printf("%s\n",c);
    }
    fclose(fp);
}
void abt_gets(){
    char buffer[MAX];
    FILE *fp=fopen("sample.txt","r");
    if(check(fp));
    int count=0;
    while(fgets(buffer,MAX,fp)!=NULL){
        printf("%s",buffer);
        count++;
    }
    printf("\ncount is %d\n",count);
}
int main(){
    //abt_fscanf();
    abt_gets();
}