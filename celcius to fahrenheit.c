#include<stdio.h>
#include<math.h>
 float percentage(float math,float sci, float sans){
    return ((math+sci+sans)/3);

 }
 int main(){
    printf("%f",percentage(100,100,100));
    return 0;
 }