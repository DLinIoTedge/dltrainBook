#include "matrix.h"
#include <stdexcept>

//Initialize with rows and columns
Matrix::Matrix(int r, int c) {
    dimension[0] = r;
    dimension[1] = c;

    data = new float*[r];
    for(int i = 0; i < r; i++)  {
        data[i] = new float[c];
    }
    isCreated = true;
}

//Default Constructor
Matrix::Matrix() {
    dimension[0] = 0;
    dimension[1] = 0;
    isCreated = false;
}

//Create matrix(row, col)
void Matrix::createMatrix(int r, int c){
    if(isCreated) {
        throw std::invalid_argument("Cant recreate a matrix!");
    }
    dimension[0] = r;
    dimension[1] = c;

    data = new float*[r];
    for(int i = 0; i < r; i++)  {
        data[i] = new float[c];
    }
    isCreated = true;
}

//--THIS COPY CONSTRUCTOR IS NOT NECESSARY AND CAUSES PROBLEMS---//

//Create matrix from source (Matrix source, int startX, int startY)
// Matrix::Matrix(const Matrix &s) {
//     dimension[0] = s.dimension[0];
//     dimension[1] = s.dimension[1];
//     data = new float*[dimension[0]];
//     for(int i = 0; i < dimension[0]; i++)  {
//         data[i] = new float[dimension[1]];
//     }
//     for(int i = 0; i < dimension[0]; i++) {
//         for(int j = 0; j < dimension[1]; j++) {
//             data[i][j] = s.data[i][j];
//         }
//     }
// }

//--UNCOMMENT ONLY IF SURE OF WHATS HAPPENING---//


//Convolve a kernel matrix with a source matrix(kernel, startx, starty, bool zeropadding)
Matrix Matrix::convolve(Matrix &kernel, bool zeropad) {
    int ytimes = dimension[0] - kernel.dimension[0] + 1, xtimes = dimension[1] - kernel.dimension[1] + 1;
    if(zeropad) {
        ytimes = dimension[0], xtimes = dimension[1];
    }
    if(xtimes <= 0 || ytimes <= 0) {
        throw std::invalid_argument("Kernel bigger than source!");
    }
    
    Matrix result(xtimes, ytimes);

    for(int i = 0; i < ytimes; i++) {
        for(int j = 0; j < xtimes; j++) {
            float sum = 0;
            for(int k = 0; k < kernel.dimension[0]; k++) {
                for(int l = 0; l < kernel.dimension[1]; l++) {
                    if(i + k < dimension[0] && j + l < dimension[1]) {
                        sum += data[i + k][j + l] * kernel[k][l];
                    }
                }
            }
            result[i][j] = sum;
        }
    }

    return result;    
}

//Transpose, returns a transpose of the current matrix;
Matrix Matrix::transpose() {
    Matrix result(dimension[1], dimension[0]);
    for(int j = 0; j < dimension[1]; j++) {
        for(int i = 0; i < dimension[0]; i++) {
            result[j][i] = data[i][j];
        }
    }
    return result;
}

//Addition operator
Matrix Matrix::operator +(const Matrix &mat) {
    if(dimension[0] != mat.dimension[0] || dimension[1] != mat.dimension[1]) {
        throw std::invalid_argument("Attempted addition on non matching matrices!");
    }
    Matrix result(dimension[0], dimension[1]);
    for(int i = 0; i < dimension[0]; i++) {
        for(int j = 0; j < dimension[1]; j++) {
            result[i][j] = data[i][j] + mat.data[i][j];
        }
    }
    return result;
}
    
//Subtraction operator
Matrix Matrix::operator -(const Matrix &mat) {
    if(dimension[0] != mat.dimension[0] || dimension[1] != mat.dimension[1]) {
        throw std::invalid_argument("Attempted addition on non matching matrices!");
    }
    Matrix result(dimension[0], dimension[1]);
    for(int i = 0; i < dimension[0]; i++) {
        for(int j = 0; j < dimension[1]; j++) {
            result[i][j] = data[i][j] - mat.data[i][j];
        }
    }
    return result;
}

//Assignment operator
void Matrix::operator = (const Matrix &m) {
    if(dimension[0] != m.dimension[0] || dimension[1] != m.dimension[1]) {
        throw std::invalid_argument("Cant assign values to matrix of different dimension!");
    }
    for(int i = 0; i < dimension[0]; i++) {
        for(int j = 0; j < dimension[1]; j++) {
            data[i][j] = m.data[i][j];
        }
    }
}

//Multiplication operator(matrix)
Matrix Matrix::operator *(Matrix const &m) {
    if(dimension[1] != m.dimension[0]) {
        throw std::invalid_argument("Cant multiply these matrices!");
    }
    Matrix result(dimension[0], m.dimension[1]);

    for(int i = 0; i < dimension[0]; i++) {
        for(int j = 0; j < m.dimension[1]; j++) {
            float sum = 0;
            for(int k = 0; k < dimension[1]; k++) {
                sum += data[i][k] * m.data[k][j];
            }
            result[i][j] = sum;
        }
    }

    return result;
}

//Multiplication operator(constant)
Matrix Matrix::operator *(float const &k) {
    Matrix result(dimension[0], dimension[1]);
    for(int i = 0; i < dimension[0]; i++) {
        for(int j = 0; j < dimension[1]; j++) {
            result[i][j] = data[i][j] * k;
        }
    }
    return result;
}

//Elementwise product operator - use '^'
Matrix Matrix::operator ^ (Matrix const &mat) {
    if(dimension[0] != mat.dimension[0] || dimension[1] != mat.dimension[1]) {
        throw std::invalid_argument("Cant perform element-wise product on two nn matching matrices!");
    }
    Matrix result(dimension[0], dimension[1]);
    for(int i = 0; i < dimension[0]; i++) {
        for(int j = 0; j < dimension[1]; j++) {
            result[i][j] = data[i][j] * mat.data[i][j];
        }
    }
    return result;
}

//Perform function on every element of matrix
void Matrix::doFunction(float (*func)(float)) {
    for(int i = 0; i < dimension[0]; i++) {
        for(int j = 0; j < dimension[1];j ++) {
            data[i][j] = func(data[i][j]);
        }
    }
}

//Load from array, assigns values from array, make sure its good multiples, otherwise segfault!
void Matrix::loadFromArray(float* arr) {
    for(int i = 0; i < dimension[0]; i++) {
        for(int j = 0; j < dimension[1]; j++) {
            data[i][j] = arr[(i * dimension[1]) + j];
        }
    }
}

//Load from array, assigns values from array, make sure its good multiples, otherwise segfault!(boolean version)
void Matrix::loadFromArray(bool* arr) {
    for(int i = 0; i < dimension[0]; i++) {
        for(int j = 0; j < dimension[1]; j++) {
            data[i][j] = arr[(i * dimension[1]) + j] ? 1 : 0;
        }
    }
}

//Flattens into an array, returns a float*
float* Matrix::flatten(){
    float* result = new float[dimension[0] * dimension[1]];
    for(int i = 0; i < dimension[0]; i++) {
        for(int j = 0; j < dimension[1]; j++) {
            result[(i * dimension[1]) + j] = data[i][j];
        }   
    }
    return result;
}

//Destructor
Matrix::~Matrix() {
    if(isCreated) {
        for(int i = 0; i < dimension[0]; i++) {
            delete[] data[i];
            data[i] = nullptr;
        }
        delete[] data;
        data = nullptr;
        isCreated = false;
    }
}