//
// Created by User on 07.12.2024.
//

#ifndef FUNCTION_H
#define FUNCTION_H

#define RAND_MAX 32767
#include "validation.h"

double manual_SLAE_input(int n, double **a, double *b)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements of the matrix row %d\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i + 1, j + 1);
            a[i][j] = validate_floating_value();
        }
        printf("Enter the free term of the row %d\n", i + 1);
        b[i] = validate_floating_value();
    }
}
double random_SLAE_input(int n, double **a, double *b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = (double)rand() / RAND_MAX;
        }
        b[i] = (double)rand() / RAND_MAX;
    }
}
#endif //FUNCTION_H
