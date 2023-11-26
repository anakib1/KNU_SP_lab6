#include <iostream>
#include <random>


const int n = 500, m = 500, l = 500;
int MX = 1000000;
int m1[n][m];
int m2[m][l];

int res[n][l];

int main() {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            m1[i][j] = random() % MX;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            m2[i][j] = random() % MX;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                res[i][k] += m1[i][j] * m2[j][k];
            }
        }
    }

    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            sum += res[i][j];
        }
    }

    std::cout << sum << '\n';
}