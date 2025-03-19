#ifndef _MATRIX_
#define _MATRIX_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

class Matrix {
public:
    int n_row, n_column;
	double **data;

    // Constructor parametrizado
    Matrix(const int n_row, const int n_column);
	
	// Operadores miembros
	double& operator () (const int row, const int column);
	Matrix& operator + (Matrix &m);
	Matrix& operator - (Matrix &m);
	
	// Operadores no miembros
	friend ostream& operator << (ostream &o, Matrix &m);
};

// Sobrecarga de los operadores
ostream& operator << (ostream &o, Matrix &m);

// Metodos
Matrix& zeros(const int n_row, const int n_column);

#endif