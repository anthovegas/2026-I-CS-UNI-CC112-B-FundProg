#include "matrix.h"
#include <iostream>
#include <fstream> // ofstream

using namespace std;

void CreateMatrix(TP **&pMat, const size_t rows, const size_t cols) {
    pMat = new TP *[rows];
    for (size_t i = 0; i < rows; ++i) 
        pMat[i] = new TP [cols];
}

void ReadMatrix(TP **pMat, const size_t rows, const size_t cols) {
    cout << "Ingrese los valores: " << endl;
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            cin >> pMat[i][j];
        } 
    }
}

void PrintMatrix(TP **pMat, const size_t rows, const size_t cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            cout << pMat[i][j] << " ";
        }
        cout << endl;
    }
}

void DeleteMatrix(TP **&pMat, const size_t rows) {
    for (size_t i = 0; i < rows; ++i) 
        delete[] pMat[i];
    delete[] pMat;
    pMat = nullptr;
}

void DemoMatrix1(){
    size_t rows, cols;
    TP **pMat = nullptr;

    // cout << "Demostracion de matrizes" << endl;
    // cout << "Ingrese nro de filas: ";
    // cin >> rows;
    // cout << "Ingrese nro de columnas: ";
    // cin >> cols;
    
    // CreateMatrix(pMat, rows, cols);
    // ReadMatrix(pMat, rows, cols, cout, cin);

    // ofstream ofs("matriz1.txt");
    // // PrintMatrix(pMat, rows, cols, cout);
    // PrintMatrix(pMat, rows, cols, ofs);
    // ofs.close();

    // DeleteMatrix(pMat, rows);

    // // Ejercicio: Leer la matriz,
    // //          luego aumentar 1 a cada elemento
    // //          finalmente guardar en un archivo de texto   
    // ifstream ifs("matriz1.txt");
    
    // TP **pMat2 = nullptr;
    // ifs >> rows >> cols;
    // CreateMatrix(pMat2, rows, cols);
    // ReadMatrix(pMat2, rows, cols, cerr, ifs);
    // ifs.close();
    // TransformarMatriz(pMat2, rows, cols);
    // ofstream ofs2("matriz2.txt");
    // PrintMatrix(pMat2, rows, cols, ofs2);
    // ofs2.close();
    // DeleteMatrix(pMat2, rows);

    cout << "\nEjercicio con textos" << endl;
    string **pMat3 = nullptr;
    cout << "Ingrese nro de filas: ";
    cin >> rows;
    cout << "Ingrese nro de columnas: ";
    cin >> cols;
    
    // CreateMatrix(pMat, rows, cols);
    // ReadMatrix(pMat, rows, cols);
    // PrintMatrix(pMat, rows, cols);
    // DeleteMatrix(pMat, rows);
}

