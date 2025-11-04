#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** split(char *str, char d, int *count) {
    char **res=NULL; *count=0;
    char *tok=strtok(str,&d);
    while(tok){
        res=realloc(res,(*count+1)*sizeof(char*));
        res[*count]=malloc(strlen(tok)+1);
        strcpy(res[*count],tok);
        (*count)++;
        tok=strtok(NULL,&d);
    }
    return res;
}

int main(){
    char s[100],d; int n;
    gets(s); scanf("%c",&d);
    char **arr=split(s,d,&n);
    for(int i=0;i<n;i++) printf("%s\n",arr[i]);
}
