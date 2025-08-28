#include <iostream>
using namespace std;


int arr[100], n;

void reverse_array() {
    cout<<"ARRAY REVERSAL";
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void matrix_multiplication() {
        cout<<"Matrix multiply";

    int a[3][3], b[3][3], c[3][3] = {0};



    cout << "Enter Matrix A:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << "Enter Matrix B:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];

    cout << "Resultant Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}

void transpose_matrix() {
        cout<<"matrix transpose on matrix A";
    
    int a[3][3], t[3][3];

   
    cout << "Enter matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            t[j][i] = a[i][j];

    cout << "Transpose of the Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << t[i][j] << " ";
        cout << endl;
    }
}


int main() {

reverse_array();
matrix_multiplication(); 
transpose_matrix(); 



    return 0;
}
