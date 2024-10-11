#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter size" << endl;
    cin >> n >> m;

    int target;
    cout << "enter target" << endl;
    cin >> target;
    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "entr element" << endl;
            cin >> mat[i][j];
        }
    }
    bool found = false;
    int r = 0, c = n - 1;
    while (r < m && c >= 0) {
        if (mat[r][c] == target) {
            found = true;
        }
        mat[r][c] > target ? c-- : r++;
    }
    if (found)
        cout << "Found";
    else
        cout << "Not Found";


    return 0;
}