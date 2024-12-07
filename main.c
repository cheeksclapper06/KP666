#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "function.h"
#include "calculation.h"
#include "validation.h"
#include "instruction .h"
#include "customization .h"

#define ENTER 13

int main()
{
    srand(time(NULL));
    do
    {
        printf("This program calculates SLAE\n");
        int n = validate_integer_value("Enter the size of the SlAE:\n");

        double **a = malloc(n * sizeof(double));
        double *b = malloc(n * sizeof(double));
        printf("How do you want to enter the elements of the SLAE?\n");
        printf("1 - Manually\n2 - Randomly\n");

        int input_choice = 0;
        input_choice = getch();
        do
        {
            switch (input_choice)
            {
                case 49:
                    manual_SLAE_input(n, a, b);
                break;

                case 50:
                    random_SLAE_input(n, a, b);
                break;

                default:
                    setTextColor(RED);
                    printf("Please enter 1 or 2\n");
                    setTextColor(WHITE);
            }
        }
        while (input_choice != 49 && input_choice != 50);

        printf("To continue press ");
        setTextColor(GREEN);
        printf("ENTER, ");
        setTextColor(WHITE);
        printf("to exit press any key\n");
    }
    while (getch() == ENTER);
    return 0;
}