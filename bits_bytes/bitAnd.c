#include<stdio.h>
#include<assert.h>
int and(int a,int b){
    return ~((~a)|(~b));
}
int main(){
    assert(and(2,3)==2);
}