// $Header$
//------------------------------------------------------------------------------
// Matrix
//------------------------------------------------------------------------------
// Initial orbit determination (Extended Kalman Filter)
//
// Under License © 2020.
//
// Created: 2025/03/28
//
/** @file matrix.h
 *  @brief This header file contains the Matrix class and its operators and methods.
 *
 *  @author Miguel Alonso Angulo.
 *  @bug No known bugs.
 */
//------------------------------------------------------------------------------

#ifndef _MATRIX_
#define _MATRIX_

#include <cstdio>
#include <cstdlib>
#include <cmath>
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

//------------------------------------------------------------------------------
// zeros(const int n_row, const int n_column)
//------------------------------------------------------------------------------
/**
 * @brief Create a matrix of zeros with size n_row x n_column.
 *
 *  @param [in] n_row Number of rows.
 *  @param [in] n_column Number of columns.
 *  @return Matrix of zeros.
 */
//------------------------------------------------------------------------------ 
Matrix& zeros(const int n_row, const int n_column);

#endif