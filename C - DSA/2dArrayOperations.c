// Perform the operations in the 2-D array : addition, subtraction, multiplication and transpose of two matrices

#include <stdio.h>
void input(int m, int n, int arr[m][n]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}

void display(int m, int n, int arr[m][n]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("  %d  ", arr[i][j]);
        }
        printf("\n");
    }
}

void addition(int m, int n, int arr1[m][n], int arr2[m][n], int arr3[m][n]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    display(m, n, arr3);
}

void subrtraction(int m, int n, int arr1[m][n], int arr2[m][n], int arr3[m][n]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    display(m, n, arr3);
}

void multiplication(int m, int n, int o, int p, int arr1[m][n], int arr2[o][p], int arr3[m][p]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            int sum = 0;
            for (int k = 0; k < o; k++){
                sum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }
    display(m, p, arr3);
}

void transpose(int m, int n, int arr[m][n], int arr3[n][m]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            arr3[j][i] = arr[i][j];
        }
    }
    display(m, n, arr3);
}

int main()
{
    while (1){
        printf("\nFrom the below operations choose one : \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n5. Exit\n Choice: ");
        int choice;
        scanf("%d", &choice);

        int m, n, o, p;

        int arr1[100][100];
        int arr2[100][100];
        int arr3[100][100];

        switch (choice){
        case 1:{
            printf("\nEnter the size of the matrices (M x N) : ");
            scanf("%d%d", &m, &n);
            printf("\nYou've chose to perform addition.\nEnter the elements of both the matrices\nMatirx 1 : \n");
            input(m, n, arr1);
            printf("\nMatrix 2 : ");
            input(m, n, arr2);
            addition(m, n, arr1, arr2, arr3);
            break;
        }
        case 2:{
            printf("\nEnter the size of the matrices (M x N) : ");
            scanf("%d%d", &m, &n);
            printf("\nYou've chose to perform subtraction.\nEnter the elements of both the matrices\nMatirx 1 : \n");
            input(m, n, arr1);
            printf("\nMatrix 2 : ");
            input(m, n, arr2);

            subrtraction(m, n, arr1, arr2, arr3);
            break;
        }
        case 3:{
            printf("\nYou've chose to perform multiplication.\nEnter the dimensions of the first matrix (MxN): ");
            scanf("%d%d", &m, &n);
            printf("\nEnter the dimensions of the second matrix (OxP): ");
            scanf("%d%d", &o, &p);
            if (n == o){
                printf("\nEnter the elements of the first matrix : \n");
                input(m, n, arr1);
                printf("\nEnter the elements of the second matrix : \n");
                input(o, p, arr2);
                printf("\nThe resultant matrix is : \n");
                multiplication(m, n, o, p, arr1, arr2, arr3);
            }
            else{
                printf("\nSorry! Couldn't perform multiplication with these dimensions.");
            }
            break;
        }
        case 4:{
            printf("\nYou've chose to perform transpose of the matrix.\nEnter the dimensions of the matrix (MxN) : ");
            scanf("%d%d", &m, &n);
            printf("\nEnter the elements of the matrix : \n");
            input(m, n, arr1);
            printf("\nAfter transpose : \n");
            transpose(m, n, arr1, arr3);
            break;
        }
        case 5: return 0;
        default:
            printf("\nInvalid Input !");
        }
    }
}