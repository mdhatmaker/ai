//
//  Matrix.hpp
//  MoreTestCpp
//
//  Created by Michael Hatmaker on 4/11/17.
//  Copyright © 2017 Michael Hatmaker. All rights reserved.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;


void matrix_test();


template <typename T>
class Matrix
{
public:
    Matrix(size_t _rowCount, size_t _colCount) : rowCount(_rowCount), colCount(_colCount)
    {
        matrix = new T*[_rowCount];
        for (int i = 0; i < _rowCount; ++i)
        {
            matrix[i] = new T[_colCount];
        }
    }
    Matrix(const vector<vector<T>>& _matrix) : Matrix(_matrix.size(), _matrix[0].size())
    {
        size_t rc = _matrix.size();
        size_t cc = _matrix[0].size();
        
        for (int r = 0; r < rc; ++r)
        {
            for (int c = 0; c < cc; ++c)
            {
                matrix[r][c] = _matrix[r][c];
            }
        }
    }
    
    T* operator[](int rowIdx) { return matrix[rowIdx]; }
    
    size_t count() { return rowCount * colCount; }
    size_t rcount() { return rowCount; }
    size_t ccount() { return colCount; }
    
    void print();
    Matrix<T> transpose();
    Matrix<T> multiply(Matrix<T>);
    Matrix<T> multiply(float);
    Matrix<T> multiply_Hadamard(Matrix<T>);
    Matrix<T> multiply_Kronecker(Matrix<T>);
    Matrix<T> add(Matrix<T>);
    Matrix<T> horizontal_concat(Matrix<T>);
    void set_all(T);
    T max();
    constexpr bool size_equals(Matrix<T> m2) const { return rowCount == m2.rowCount && colCount == m2.colCount; }
private:
    const size_t rowCount, colCount;
    T** matrix;

};


template <typename T>
void Matrix<T>::print()
{
    for (int r = 0; r < rowCount; ++r)
    {
        if (r == 0)
            cout << "[ ";
        else
            cout << "  ";
        
        for (int c = 0; c < colCount; ++c)
        {
            cout << matrix[r][c] << " ";
        }
        if (r == rowCount-1) cout << "]";
        cout << endl;
    }
}

template <typename T>
Matrix<T> Matrix<T>::transpose()
{
    Matrix<T> m(colCount, rowCount);
    
    for (int ir = 0; ir < rowCount; ++ir)
    {
        for (int ic = 0; ic < colCount; ++ic)
        {
            m[ic][ir] = matrix[ir][ic];
        }
    }
    
    return m;
}

template <typename T>
Matrix<T> Matrix<T>::multiply(Matrix<T> m2)
{
    Matrix<T> m(rowCount, m2.ccount());
    
    return m;
}

template <typename T>
Matrix<T> Matrix<T>::multiply(float f)
{
    Matrix<T> m(rowCount, colCount);
    for (int r = 0; r < rowCount; ++r)
    {
        for (int c = 0; c < colCount; ++c)
        {
            m[r][c] = f * matrix[r][c];
        }
    }
    return m;
}

template <typename T>
Matrix<T> Matrix<T>::multiply_Hadamard(Matrix<T> m2)
{
    assert(size_equals(m2));
    
    Matrix<T> m(rowCount, colCount);
    
    for (int r = 0; r < rowCount; ++r)
    {
        for (int c = 0; c < colCount; ++c)
        {
            m[r][c] = matrix[r][c] * m2[r][c];
        }
    }
    return m;
}

template <typename T>
Matrix<T> Matrix<T>::multiply_Kronecker(Matrix<T> m2)
{
    assert(rowCount == 1 && m2.colCount == 1);
    
    Matrix<T> m(m2.rowCount, colCount);
    
    for (int r = 0; r < m2.rowCount; ++r)
    {
        for (int c = 0; c < colCount; ++c)
        {
            m[r][c] = matrix[0][r] * m2[c][0];
        }
    }
    return m;
}

template <typename T>
Matrix<T> Matrix<T>::add(Matrix<T> m2)
{
    assert(size_equals(m2));
    
    Matrix<T> m(rowCount, colCount);
    
    for (int r = 0; r < rowCount; ++r)
    {
        for (int c = 0; c < colCount; ++c)
        {
            m[r][c] = matrix[r][c] + m2[r][c];
        }
    }
    return m;
}

template <typename T>
Matrix<T> Matrix<T>::horizontal_concat(Matrix<T> m2)
{
    assert(rowCount == m2.rowCount);
    
    Matrix<T> m(rowCount, colCount + m2.colCount);
    
    for (int r = 0; r < rowCount; ++r)
    {
        for (int c = 0; c < colCount; ++c)
        {
            m[r][c] = matrix[r][c];
        }
        for (int c = 0; c < m2.colCount; ++c)
        {
            m[r][c+colCount] = m2[r][c];
        }
    }
    return m;
}

template <typename T>
T Matrix<T>::max()
{
    T maximum = matrix[0][0];
    
    for (int r = 0; r < rowCount; ++r)
    {
        for (int c = 0; c < colCount; ++c)
        {
            if (matrix[r][c] > maximum)
                maximum = matrix[r][c];
        }
    }
    return maximum;
}

template <typename T>
void Matrix<T>::set_all(T value)
{
    for (int r = 0; r < rowCount; ++r)
    {
        for (int c = 0; c < colCount; ++c)
        {
            matrix[r][c] = value;
        }
    }
}
#endif /* Matrix_hpp */
