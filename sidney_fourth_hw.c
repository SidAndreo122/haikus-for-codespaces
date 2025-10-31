#include <stdio.h>
void matrice_addition(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int arr3[rows][cols]){
   
    int n = 1;
    for (int i= 0; i<rows; i++)
        for (int j=0; j<cols; j++){
            arr1[i][j] = 3 * n + 1;
            n++;
        }
    for (int i= 0; i<rows; i++)
        for (int j=0; j<cols; j++)
            printf("%d,", arr1[i][j]);
    
    printf("\n");
   
    n = 1;
    for (int i= 0; i<rows; i++)
        for (int j=0; j<cols; j++){
            arr2[i][j] = n * n;
            n++;
        }
    for (int i= 0; i<rows; i++)
        for (int j=0; j<cols; j++)
            printf("%d,", arr2[i][j]);

    printf("\n");
 

    for (int i= 0; i<rows; i++)
        for (int j=0; j<cols; j++)
            arr3[i][j] = arr1[i][j] + arr2[i][j];


    for (int i= 0; i<3; i++)
        for (int j=0; j<2; j++)
            printf("%d,", arr3[i][j]);
    printf("\n");
}
void determinant_check(int m1[2][2], int m2[2][2]){
    double determinant;
    int matrice_1[2][2] = {{1,2}, {3,6}};
    int matrice_2[2][2] = {{6,3}, {9,2}};

    int top_left = m1[0][0] * m2[1][1];
    int top_right = m1[0][1] * m2[1][0];
    determinant = top_left - top_right;
    if (determinant == 0){
        printf("Determinant is %f. This matrix is non-invertible.\n", determinant);
    }
    else{
        printf("Determinant is %f. This matrix is invertible.\n", determinant);
    }
}
int main() {
    printf("Self Study 0\n");
    int array_1[3][2] = {{2,4}, {5,1}, {8,6}};
    int array_2[4] = {1, 3, 8, 15};
    printf("%d\n", array_1[0][1]);
    printf("%d\n", array_1[2][0]);
    printf("%d\n", array_1[1][1]);
    printf("%d\n", array_2[2]);
    printf("%d\n", array_2[0]);
    printf("%d\n", array_2[1]);
    printf("Self Study 2\n");
    int array_3[3][2];
    int n = 1;
    for (int i= 0; i<3; i++)
        for (int j=0; j<2; j++){
            array_3[i][j] = 3 * n + 1;
            n++;
        }
    for (int i= 0; i<3; i++)
        for (int j=0; j<2; j++)
            printf("%d,", array_3[i][j]);
    
    printf("\n");
    int array_4[3][2];
    n = 1;
    for (int i= 0; i<3; i++)
        for (int j=0; j<2; j++){
            array_4[i][j] = n * n;
            n++;
        }
    for (int i= 0; i<3; i++)
        for (int j=0; j<2; j++)
            printf("%d,", array_4[i][j]);

    printf("\n");
    int array_5[3][2];

    for (int i= 0; i<3; i++)
        for (int j=0; j<2; j++)
            array_5[i][j] = array_3[i][j] + array_4[i][j];


    for (int i= 0; i<3; i++)
        for (int j=0; j<2; j++)
            printf("%d,", array_5[i][j]);
    printf("\n");
    printf("Self Study 3\n");
    double determinant;
    int matrice_1[2][2] = {{1,2}, {3,6}};
    int matrice_2[2][2] = {{6,3}, {9,2}};

    int top_left = matrice_1[0][0] * matrice_2[1][1];
    int top_right = matrice_1[0][1] * matrice_2[1][0];
    determinant = top_left - top_right;
    if (determinant == 0){
        printf("Determinant is %f. This matrix is non-invertible.\n", determinant);
    }
    else{
        printf("Determinant is %f. This matrix is invertible.\n", determinant);
    }
    printf("Self Study 4\n");
    int array1[3][2];
    int array2[3][2];
    int array3[3][2];

    matrice_addition(3, 2, array1, array2, array3);
    determinant_check(matrice_1, matrice_2);
}