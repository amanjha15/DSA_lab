#include <iostream>
using namespace std;

int main(){
    int a[3][3];
   
    cout << "Enter matrix:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];
    for(int i = 0; i < 3; i++) {
        int row_sum = 0;
        for(int j = 0; j < 3; j++)
            row_sum += a[i][j];
        cout << "Sum of row " << i << ": " << row_sum << endl;
    }
    for(int j = 0; j < 3; j++) {
        int col_sum = 0;
        for(int i = 0; i < 3; i++)
            col_sum += a[i][j];
        cout << "Sum of column " << j << ": " << col_sum << endl;
    }
    
    
    
    
    return 0;}
