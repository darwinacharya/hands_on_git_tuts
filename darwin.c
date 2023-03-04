#include <stdio.h>
#include<conio.h>
int main() {
    int a ,b;
    l
    printf("Enter the two numbers :");
    scanf("%d%d",&a,&b);
    int result;
    char ch,choice;

    do {
        printf("Enter + to add, - to subtract: ");
        choice=getch();
        switch(choice) {
            case'+':
                result = a + b;
                printf("Result is = %d\n", result);
                break;
            case'-':
                result = a - b;
                printf("Result is = %d\n", result);
                break;
            default:
                printf("Invalid choice !\n");
        }

        printf("Do you want to continue? Enter y for yes ( y/n): ");
        scanf(" %c", &ch);
    } while(ch == 'y' || ch == 'Y'); 
    
    return 0;
}