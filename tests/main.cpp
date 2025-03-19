// $Source$
//------------------------------------------------------------------------------
// Main
//------------------------------------------------------------------------------
// Initial orbit determination (Extended Kalman Filter)
//
// Under License © 2020.
//
// Created: 2025/03/28
//
/** @file main.cpp
 *  @brief Main program operations.
 *
 *  @author Miguel Alonso Angulo.
 *  @bug No known bugs.
 */
//------------------------------------------------------------------------------

#include "..\include\matrix.h"
#include <iostream>

using namespace std;

int main() {
    Matrix M1(3, 2);
	M1(1,1) = 5;
	
    Matrix M2(3, 2);
	M2(1,1) = -3;
	
    Matrix M3 = M1 - M2;

    cout << "M1\n" << M1 << "\n";
    cout << "M2\n" << M2 << "\n";
    cout << "M3\n" << M3 << "\n";
	
	cout << M1(1,1) << "\n";

    return 0;
}