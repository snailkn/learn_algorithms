# include <iostream>
# include <stdlib.h>
# define N 6
using namespace std;

// struct SubMatrix
// {
// 	int sr;
// 	int er;
// 	int sc;
// 	int ec;
// };

// void MATRIX_MULTIPLY(int n, int *a[n], int *b[n], int *c[n]){
// 	if (n ==1){
// 		**c = **a * **b;
// 	}
// 	else {
// 		MATRIX_MULTIPLY(a,)
// 	}
// }

void test(int n, int p1[][n]){
    **(p1+1) = 5;
    cout<<p1[1][0]<<endl;
}

int main(){
    srand(1);
    int a[N][N], b[N][N], c[N][N];
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            a[i][j] = rand();
            b[i][j] = rand();
        }
    }

    // MATRIX_MULTIPLY(a, b, m, m);
    int n=3;
    int p[3][3];
    test(n, p);
    cout<<a[10][10]<<'\n'<<"1"<<endl;
}
