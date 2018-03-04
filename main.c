#include <stdio.h>

int ceiling(float x){
    int result=x ;
    if(result != x && x >= 0){
        result += 1;
    }
    return result;
}

float floor(float x){
    int result=x ;
    if(result != x && x<=0){
        result -= 1;
    }
    return result;
}

float mantissa(float x){
    float result = 0;
    if(x>0){
        result = x - floor(x);
    }else{
        result = -(x - ceiling(x));
    }
    return result;
}

int modulo(int a, int b){
    int result = a/b;
    result =a - (result * b);
    if(result<0){
        result=-result;
    }
    return result;
}


int main() {
    float x = -0.35;
    int a = -101;
    int b = 10;

    int result_of_ceiling = ceiling(x);
    printf("ceiling of %f is %d \n",x,result_of_ceiling);
    int result_of_floor = floor(x);
    printf("floor of %f is %d \n",x,result_of_floor);
    float result_mantisa = mantissa(x);
    printf("mantissa of %f is %f \n",x,result_mantisa);
    int result_modulo = modulo(a,b);
    printf(" %d modulo %d is %d \n",a,b,result_modulo);

    return 0;
}