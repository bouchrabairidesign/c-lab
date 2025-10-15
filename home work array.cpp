#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int M[100][100];
    cout << "Enter the elements of the matrix:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> M[i][j];
        }
    }

    bool valid = true;

    for (int i = 0; i < n && valid; i++) {
        bool exist[101] = {false};
        for (int j = 0; j < n; j++) {
            int val = M[i][j];
            if (val < 1 || val > n || exist[val]) {
                valid = false;
                break;
            }
            exist[val] = true;
        }
    }
    for (int j = 0; j < n && valid; j++) {
        bool exist[101] = {false};
        for (int i = 0; i < n; i++) {
            int val = M[i][j];
            if (val < 1 || val > n || exist[val]) {
                valid = false;
                break;
            }
            exist[val] = true;
        }
    }
    if (valid)
        cout << "The matrix is valid" << endl;
    else
        cout << "The matrix is not valid" << endl;

    return 0;
}
