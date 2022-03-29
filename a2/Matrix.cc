#include "Matrix.h"
Matrix::Matrix(int r = 0, int c = 0, double d = 0.0) {
  rows = r;
  cols = c;
  element = new double[rows*cols];
  for(int i = 0; i < rows*cols; i++) {
    element[i] = 0.0;
  }
}

Matrix::Matrix(const Matrix& m) {
  rows = m.rows;
  cols = m.cols;
  element = new double[rows*cols];
  for (int i = 0; i < rows*cols; i++) {
    element[i] = m.element[i];
  }
}

Matrix::Matrix(int r, int c, vector<double> v) {
  if (r*c == v.size()) {
    rows = r;
    cols = c;
    element = new double[rows*cols];
    for(int i = 0; i < rows*cols; i++) {
      element[i] = v[i];
    }
  }
}

Matrix::~Matrix() {
  delete[] element;
}

const double& Matrix::operator()(int i, int j) const {
  static double e;
  e = 0;
  if (i > 0 && i <= rows && j > 0 && j <= cols) {
    return element[(i - 1)*cols + j - 1];
  }
  return e;
}

double& Matrix::operator()(int i, int j) {
  static double e;
  e = 0;
  if (i > 0 && i <= rows && j > 0 && j <= cols) {
    return element[(i - 1)*cols + j - 1];
  }
  return e;
}

Matrix& Matrix::operator=(const Matrix& m) {
  rows = m.rows;
  cols = m.cols;
  delete[] element;
  element = new double[rows*cols];
  for(int i = 0; i < rows*cols; i++) {
    element[i] = m.element[i];
  }
  return *this;
}

Matrix& Matrix::operator+=(const Matrix& x) {
  if (rows == x.rows && cols == x.cols) {
    for (int i = 0; i < rows*cols; i++) {
      element[i] += x.element[i];
    }
  }
  return *this;
}

Matrix& Matrix::operator-=(const Matrix& x) {
  if (rows == x.rows && cols == x.cols) {
    for (int i = 0; i < rows*cols; i++) {
      element[i] -= x.element[i];
    }
  }
  return *this;
}

Matrix& Matrix::operator*=(const Matrix& m) {
  int index = 0;
  double value = 0, *tmp = new double[rows * m.cols];
  for (int i = 0; i < rows * m.cols; i++) {
    tmp[i] = 0;
  }

  if(cols == m.rows) {
    for(int i = 1; i <= rows; i++) {
      for(int j = 1; j <= m.cols; j++) {
        for(int k = 1; k <= cols; k++) {
          tmp[index] +=  ((*this)(i, k) * m(k, j));
        }
        index++;
      }
    }
  }

  delete[] element;
  element = tmp;
  cols = m.cols;
  return *this;
}

Matrix& Matrix::operator*=(double d) {
  for(int i = 0; i < rows*cols; i++) {
    element[i] *= d;
  }
  return *this;
}

void Matrix::print(ostream& sout) const {
  sout << "| ";
  for(int i = 0; i < rows * cols; i++) {
    if (i%cols == 0 && i != 0) {
      sout << '|' << endl << "| ";
    }
    sout << element[i] << ' ';
  }
  sout << '|' << endl;
}
