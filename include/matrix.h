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

    // Parameterized constructor
    Matrix(const int n_row, const int n_column);
	
	// Member operators
	double& operator () (const int row, const int column);
	Matrix& operator + (Matrix &m);
	Matrix& operator - (Matrix &m);
	
	// Non-member operators
	friend ostream& operator << (ostream &o, Matrix &m);
};

// Operator overloading
ostream& operator << (ostream &o, Matrix &m);

// Methods
Matrix& zeros(const int n_row, const int n_column);

#endif