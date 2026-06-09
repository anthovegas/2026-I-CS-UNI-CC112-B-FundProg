#ifndef __MATRIX_H__
#define __MATRIX_H__
<<<<<<< HEAD

#include <iostream>
=======
#include <iostream>  // cout, cin, endl
#include <cstddef>   // size_t
>>>>>>> upstream/11-pointers
#include "types.h"
using namespace std;

<<<<<<< HEAD
void CreateMatrix(TP **&pMat, const size_t rows, const size_t cols);
void ReadMatrix(TP **pMat, const size_t rows, const size_t cols);
void PrintMatrix(TP **pMat, const size_t rows, const size_t cols);
void DeleteMatrix(TP **&pMat, const size_t rows);
=======
template<typename TP> 
void CreateMatrix(TP **&pMat, size_t rows, size_t cols){
    pMat = new TP*[rows];
    for (size_t i = 0; i < rows; i++)
        pMat[i] = new TP[cols];
}

template<typename TP> 
void ReadMatrix(TP **pMat, size_t rows, size_t cols, 
                ostream &os, istream &is){
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < cols; j++){
            os << "Ingrese pMat[" << i << "][" << j << "]: ";
            is >> pMat[i][j];
        }
}

template<typename TP> 
void TransformarMatriz(TP **pMat, size_t rows, size_t cols){
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < cols; j++)
            pMat[i][j] += 1;
}

template<typename TP> 
void PrintMatrix(TP **pMat, size_t rows, size_t cols,
                 ostream &os){
    os << rows << " " << cols << endl;
    for (size_t i = 0; i < rows; i++){
        for (size_t j = 0; j < cols; j++)
            os << pMat[i][j] << " ";
        os << endl;
    }
}

template<typename TP> 
void DeleteMatrix(TP **&pMat, size_t rows){
    for (size_t i = 0; i < rows; i++)
        delete[] pMat[i];
    delete[] pMat;
    pMat = nullptr;
}
>>>>>>> upstream/11-pointers

void DemoMatrix1();

#endif // __MATRIX_H__