#include<stdio.h>
int count=0;
int length(char str[]){
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count-1;
}
int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("%s",length (name));
    return 0;
}