#ifndef matrix
#define matrix

class Matrix {
    bool isCreated = false;    
public:
    int dimension[2] = {0, 0};

    //Default Constructor
    Matrix();

    //Create matrix(row, col)
    void createMatrix(int r, int c);

    //Stores data in [row][column]
    float** data;

    //Initialize with rows and columns
    Matrix(int row, int col);

    //Create matrix from source (Matrix source)
    // Matrix(const Matrix &source);

    //Reference operator
    float* operator [] (int const index) {
        return data[index];
    }

    //Assignment operator
    void operator = (const Matrix &m);

    //Returns dimensions after convolution(source x/y, kernel x/y)
    static int getRowConvolve(int sx, int kx, bool zeropad=false) {
        int ytimes;        
        if(zeropad) {
            ytimes = sx;
        } else {
            ytimes = sx - kx + 1;
        }
        return ytimes;
    }

    static int getColConvolve(int sx, int kx, bool zeropad=false) {
        int xtimes;        
        if(zeropad) {
            xtimes = sx;
        } else {
            xtimes = sx - kx + 1;
        }
        return xtimes;
    }

    //Load from array, assigns values from array, make sure its good multiples
    void loadFromArray(float* arr);

    //Load from array, assigns values from array, make sure its good multiples(boolean version)
    void loadFromArray(bool* arr);

    //Flattens into an array, returns a float*
    float* flatten();

    //Convolve a kernel matrix with a source matrix(kernel, zeropad)
    Matrix convolve(Matrix &kernel, bool zeropad=false);

    //Transpose, returns a transpose of the current matrix;
    Matrix transpose();

    //Addition operator
    Matrix operator + (Matrix const &mat);
    
    //Subtraction operator
    Matrix operator - (Matrix const &mat);

    //Multiplication operator(matrix)
    Matrix operator * (Matrix const &mat);

    //Multiplication operator(constant)
    Matrix operator * (float const &mat);

    //Elementwise product operator - use '^'
    Matrix operator ^ (Matrix const &mat);

    //Perform function on every element of matrix
    void doFunction(float (*func)(float));

    //Destructor
    ~Matrix();
};

#endif