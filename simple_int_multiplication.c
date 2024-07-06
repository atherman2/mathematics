#include <stdio.h>

int mult_int(int num0, int num1){
    if(num0 == 1){
        return num1;
    }
    else if(num0 == 0){
        return 0;
    }
    else{
        int ind = 0;
        int exp2 = 1;
        while(num0 >= (exp2<<1)){
            exp2 <<= 1;
            ind++;
        }
        return mult_int(num0 - exp2, num1) + (num1<<ind);
    }
}

void main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int result = mult_int(a,b);
    printf("%d\n", result);
}