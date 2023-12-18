#include<stdio.h>
#include<assert.h>
int xor(int a,int b){
    return ((~(a&b))&(a|b));
}
int main(){
    assert(xor(5,4)==1);
}