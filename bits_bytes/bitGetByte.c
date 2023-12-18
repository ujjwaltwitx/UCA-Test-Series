#include<stdio.h>
#include<assert.h>
int GetByte(int x,int n){
    return (x>>(n*8)&(255));
}
int main(){
    assert(GetByte(14657,1)==57);
    return 0;
}