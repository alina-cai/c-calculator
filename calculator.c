#include <stdio.h>
#include <math.h>

int main() {
    
    //declare variable
    int int1;
    int int2;
    char numOperator;

    //ask user for input
    printf("Enter an operator ('+', '-', '*', '/', '^', '%%'): ");
    scanf("%c", &numOperator);
    printf("Enter any integer: ");
    scanf("%d", &int1);
    printf("Enter another integer: ");
    scanf("%d", &int2);

    // deny division by 0;
    
        
    //process user's choice and print result
    switch (numOperator){

        if (numOperator == '/' and int2 == 0) {
        printf("undefined");
        }

        case '+': printf("%d + %d = %d\n", int1, int2, int1+ int2);
                break;
        case '-': printf("%d - %d = %d\n", int1, int2, int1 - int2);
                break;
        case '*': printf("%d * %d = %d\n", int1, int2, int1 * int2);
                break;
        case '/': if (int2 == 0) {
                        printf("%d / %d = undefined\n", int1, int2); // deny division by 0;
                    }
                    else {
                        printf("%d / %d = %d\n", int1, int2, int1 / int2);
                    }
                break;
        case '^': printf("%d ^ %d = %.0f\n", int1, int2, pow(int1, int2));
                break;
        case '%': printf("%d %% %d = %d\n", int1, int2, int1 % int2);
                break;
        default: printf("Error! Operator is invalid.");
    
    }

    return 0;

}