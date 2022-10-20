#include <stdio.h>
void myFunc1(){
    char c2;
    scanf(" %c",&c2);
    if (c2 != 'X')
    //  myFunc2()
    printf(" this is the value of you enter %c", c2);
    return;   
}
int main(){
    myFunc1();
    myFunc1();
    return 0;
}
