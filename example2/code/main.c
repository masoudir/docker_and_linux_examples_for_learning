#include "main.h"

int temp = 2;
int pwm = 0;


int hyst(int input_temp) {
    return input_temp + 10;
}

int main()
{
    printf("Hello World\r\n");
    

    while(true) {
        pwm = hyst(temp);
        
    }

    return 0;
}