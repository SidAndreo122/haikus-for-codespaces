#include <stdio.h>

int add_arrays(int a1[10], int a2[10]){
    for(int i = 0; i < 10; i++){
        printf("\nSum of Arrays: %d", a1[i] + a2[i-1]);
    }
    printf("\n");
}
int subtract_matrices(int m1[3][3], int m2[3][3]){
    printf("Result (Matrix1 - Matrix2)\n");
    for (int i= 0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d",m1[i][j] - m2[i][j]);
        }
        printf("\n");
    }

}
int main() {
    int array_1[10] = {1,2,3,4,5,6,7,8,9,10};
    int array_2[10];

    int matrix_1[3][3] = {{2,4,6}, {8, 10, 12}, {14, 16, 18}};
    int matrix_2[3][3] = {{1,3,5}, {7,9,11}, {13, 15, 17}};

    for(int i = 0; i < 10; i++){
        array_1[i] = i*i;
    }
    for(int i = 1; i<10; i++){
        printf("Array 1 (squares of n): %d\n", array_1[i]);
    }
    for(int i = 0; i < 10; i++){
        array_2[i] = i*i*i;
    }
    for(int i = 0; i<10; i++){
        printf("Array 2 ((n-1^3) of n): %d\n", array_2[i]);
    }
    printf("Matrix 1 (Even Numbers)\n");
    for (int i= 0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d,", matrix_1[i][j]);
        }
        printf("\n");
    }
        
            
    printf("Matrix 2 (Odd Numbers)\n");
    for (int i= 0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d,", matrix_2[i][j]);
        }
        printf("\n");
    }
        
            
    add_arrays(array_1, array_2);
    subtract_matrices(matrix_1, matrix_2);
}