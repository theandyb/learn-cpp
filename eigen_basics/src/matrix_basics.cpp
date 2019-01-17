#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main(){
    MatrixXd m(2,2); // Declare a 2x2 matrix of doubles
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << "Here's the matrix m:\n" << m << std::endl;

    VectorXd v(2); // 2x1 Vector with 2 elements (again values are doubles)
    v(0) = 4;
    v(1) = v(0) - 1;
    std::cout << "\nHere is the vector d:\n" << v << std::endl;
    
    // Comma-initialization
    Matrix3f m2; // static sized matrix; memory allocated, but no values initialized
    m2 << 1, 2, 3,
      4, 5, 6,
      7, 8, 9;
    std::cout << "\nHere is matrix m2:\n" << m2 << std::endl;

    return 0;
}
