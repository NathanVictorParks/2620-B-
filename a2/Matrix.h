#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>
using namespace std;
class Matrix {
 public:
  // Construction
  Matrix(int r, int c, double d);
  // Copy construction
  Matrix(const Matrix& m);

  //Type conversion constructon
  Matrix(int r, int c, vector<double> v);

  // Destructor
  ~Matrix();

  // Index operators
  const double& operator()(int i, int j) const; //to work on const objects
  double& operator()(int i, int j);

  // Copy assignment operator
  Matrix& operator=(const Matrix& m);

  // Compound arithmetic operators
  Matrix& operator+=(const Matrix& x);
  Matrix& operator-=(const Matrix& x);
  Matrix& operator*=(const Matrix& m);
  Matrix& operator*=(double d); // scalar multiplication

  // Output
  void print(ostream& sout) const; //display the matrix onto output stream
  // sout neatly


 private:
  int rows; // number of rows
  int cols; // number of columns
  double *element; //dynamic array to hold data
};
#endif
