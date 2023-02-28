#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, m;

    cout << "Enter the number of rows in the first matrix: ";
    cin >> r1;
    cout << "Enter the number of columns in the first matrix: ";
    cin >> c1;

    cout << "Enter the elements of the first matrix: " << endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter the number of rows in the second matrix: ";
    cin >> r2;
    cout << "Enter the number of columns in the second matrix: ";
    cin >> c2;

    if (c1 != r2) {    //making sure that the number of columns in the first matrix != number of rows in the second matrix to know if we can multiply the 2 matrices or not.
        cout << "The matrices cannot be multiplied." << endl;
        return 0;
    }

    cout << "Enter the elements of the second matrix: " << endl;
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }


    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (m = 0; m < c1; m++) {
                result[i][j] += a[i][m] * b[m][j];
            }
        }
    }


    cout << "Result: " << endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// The Complexity will be O(n^3). I'll attach my solution to show my steps. Thanks 