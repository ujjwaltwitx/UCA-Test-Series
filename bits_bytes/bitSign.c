#include<stdio.h>
#include<assert.h>
int sign(int x){
    return (x>>31)|(!(x>>31) && !!x);
}
int main(){
    assert(sign(24)==1);
    assert(sign(-1)==-1);
}