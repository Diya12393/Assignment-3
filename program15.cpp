#include <iostream>
using namespace std;
int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    std::cout << "Resultant Matrix:\n";
    for(int i = 0; i < 2; i++) 
	{
        for(int j = 0; j < 2; j++)
	 {
        cout << result[i][j] << " ";
     }
        cout << "\n";
    }

    return 0;
}
