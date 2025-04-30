#include<stdio.h>
#include<string.h>

int main(){
    char sent[]="hello world";
    char *words=strtok(sent," "); //splits.
    char *arr[100];
    int ct=0;
    while(words!=NULL){
        arr[ct++]=words;
        words=strtok(NULL," ");
    }

    for(int i=0;i<ct;i++){
        printf("%s\n",arr[i]);

    }
}