#include <stdio.h>
     int main() {
     	
     void add(float a, float b);
     void subtract(float a, float b);
     void multiply(float a, float b);
     void divide(float a, float b);
     void modulus(int a, int b);

   
    int choice;
    float num1, num2;

    do {
        
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");

       
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice != 0) {
           
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
        }

        
        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                if (num2 != 0) {
                    divide(num1, num2);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                if ((int)num2 != 0) {
                    modulus((int)num1, (int)num2);
                } else {
                    printf("Error: Modulus by zero is not allowed.\n");
                }
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0); 

    return 0;
}


    void add(float a, float b) {
    printf("Addition of %.2f and %.2f is %.2f\n", a, b, a + b);
}


    void subtract(float a, float b) {
    printf("Subtraction of %.2f and %.2f is %.2f\n", a, b, a - b);
}


     void multiply( a,  b) {
    printf("Multiplication of %.2f and %.2f is %.2f\n", a, b, a * b);
}


     void divide( a,  b) {
    printf("Division of %.2f and %.2f is %.2f\n", a, b, a / b);
}


    void modulus(int a, int b) {
    printf("Modulus of %d and %d is %d\n", a, b, a % b);
}
