//
//  Matrix.cpp
//  MoreTestCpp
//
//  Created by Michael Hatmaker on 4/11/17.
//  Copyright © 2017 Michael Hatmaker. All rights reserved.
//

#include "Matrix.h"

void matrix_test()
{
    cout << "Transpose" << endl;
    auto m1 = Matrix<int>({{2, 1, 3}, {3, 5, 2}});
    m1.print();
    
    auto m1T = m1.transpose();
    m1T.print();
    
    cout << "Multiply Scalar" << endl;
    auto m2 = m1.multiply(1.5);
    m2.print();
    
    cout << "Add" << endl;
    m1.print();
    auto m3 = Matrix<int>({{5, 4, 2}, {1, 7, 3}});
    m3.print();
    auto m1plus3 = m1.add(m3);
    m1plus3.print();
    
    auto row = Matrix<int>({{3, 5, 6}});
    auto column = Matrix<int>({{2}, {4}, {1}});
    auto mult_kron = row.multiply_Kronecker(column);
    cout << "Multiply Kronecker" << endl;
    row.print();
    column.print();
    mult_kron.print();
    
    cout << "Multiply Hadamard" << endl;
    auto mult_had = m1.multiply_Hadamard(m3);
    m1.print();
    m3.print();
    mult_had.print();
    
    cout << "Horizontal Concatenation" << endl;
    auto horiz_concat = m1.horizontal_concat(m3);
    horiz_concat.print();
    

}
