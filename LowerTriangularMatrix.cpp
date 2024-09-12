
//A matrix which contains elements below principal diagonal including principal diagonal elements and rest of the elements are 0.

#include <iostream>
using namespace std;
int main(){
    int a[3][3], i, j;
    cout << "Enter 3 * 3 Matrix: " << endl;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << "Original Matrix is: " << endl;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Lower Triangular Matrix: " << endl;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (i < j){
                cout << 0 << " ";
            }
            else{
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}