#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main(){
    Matrix3f A;
    Vector3f b;
    A << 1,2,3, 4,5,6, 7,8,10;
    b << 3, 3, 4;
    std::cout << "Here is the matrix A:\n" << A << std::endl;
    std::cout << "And here is vector b:\n" << b << std::endl;

    Vector3f x = A.colPivHouseholderQr().solve(b);
    std::cout << "The solution is:\n" << x << std::endl;
    
    Vector3f error = A*x - b;
    std::cout << "A*x - b =\n" << error << std::endl;
    double relative_error = error.norm() / b.norm(); //l2 norm
    std::cout << "The relative error (error l2 norm / b l2 norm) is:\n" << relative_error << std::endl;

    return 0;
}
