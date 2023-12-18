#include<stdio.h>
#include<assert.h>
int conditional(int x,int y,int z){
    int mask=(~(!x))+1;
    return (mask&z)|((~mask)&y);
}
int main(){
    assert(conditional(1,2,3)==2);
    return 0;
}