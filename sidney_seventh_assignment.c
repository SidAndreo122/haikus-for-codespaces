#include <stdio.h>

int func6(int value){
    printf("value received in func6: %d\n", value);
    return value * 2;
}
int func5(int value){
   
    
    return func6(value);
}
int func4(int value){
    

    return func5(value);
}
int func3(int value){
    
    
    return func4(value);
}
int func2(int value){
    

    return func3(value);
}
int func1(int value){
    
    return func2(value);
}

void main() {
    int input;

    printf("Enter a number\n");
    scanf("%d", &input);
    
    printf("Final value returned in main: %d\n", func1(input));
}