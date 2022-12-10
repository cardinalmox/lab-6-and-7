#include<iostream>
#include"vvod.h"
#include"sravnenie.h"
#include"zamena.h"

using namespace std;
int main() {
    int matrix[100][100];
    int mas[100];
    int n;
    int x;
    cin >> n;
    cin >> x;
    OT::inputMatrix(matrix,n,x);
    if (AT::sravnMatrix(matrix, n, x)==true){
        BIB::zamena(matrix,n,mas);
    }
}