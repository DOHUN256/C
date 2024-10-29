#include <stdio.h>



int main(){
    int num1,num2,num3;

    printf("세 정수를 입력하시오.\n");
    scanf("%d %d %d",&num1, &num2, &num3);
    
    char math1,math2;
    printf("연산자를 두 개 입력하시오\n");
    scanf(" %c %c",&math1, &math2);

    int sum1,sum2;

    if (math2 == '*' || math2 == '/'){
        switch(math2){
            case '*':
                sum1 = num2 * num3;
                break;
            case '/':
                sum1 = num2 / num3;
                break;
        }
        switch(math1){
            case '+':
                sum2 = num1 + sum1;
                break;
            case '-':
                sum2 = num1 - sum1;
                break;
            case '*':
                sum2 = num1 * sum1;
                break;
            case '/':
                sum2 = num1 / sum1;
                break;
        }
    }
    else{
        switch(math1){
            case '+':
                sum1 = num1 + num2;
                break;
            case '-':
                sum1 = num1 - num2;
                break;
            case '*':
                sum1 = num1 * num2;
                break;
            case '/':
                sum1 = num1 / num2;
                break;
        }
        switch(math2){
            case '+':
                sum2 = sum1 + num3;
                break;
            case '-':
                sum2 = sum1 - num3;
                break;
            case '*':
                sum2 = sum1 * num3;
                break;
            case '/':
                sum2 = sum1 / num3;
                break;
        }
    }
    
    printf("결과값 : %d",sum2);
    
    return 0;
}