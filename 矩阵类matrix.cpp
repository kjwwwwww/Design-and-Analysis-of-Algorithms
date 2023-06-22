//#include<iostream>
//#include<string>
//#pragma warning(disable:4996)
//using namespace std;
//class Matrix
//{
//    int rows,columns;
//    int** arr;
//public:
//    Matrix(){}
//    Matrix(int a,int b):rows(a),columns(b)
//    {
//        arr = new int*[rows];
//        for (int i = 0; i < rows; i++)
//        {
//            arr[i] = new int[columns];
//        }
//    } 
//    int getRows()
//    {
//        return rows;
//    }
//    int getColumns()
//    {
//        return columns;
//    }
//    int *& operator[]( int i)
//    {
//        return arr[i];
//    }
//    Matrix(const Matrix& m)
//    {
//        rows = m.rows;
//        columns = m.columns;
//        arr = new int* [rows];
//        for (int i = 0; i < rows; i++)
//        {
//            arr[i] = new int[columns];
//        }
//        for (int i = 0; i < rows; i++)
//            for (int j = 0; j < columns; j++)
//                arr[i][j] = m.arr[i][j];
//    }
//    ~Matrix()
//    {
//        if (arr != NULL)
//        {
//            for (int i = 0; i < rows; i++)
//                delete[] arr[i];
//            delete[] arr;
//        }
//    }
//    friend Matrix operator+ (const Matrix& m1, const Matrix& m2);
//    friend Matrix operator* (const Matrix& m1, const Matrix& m2);
//    friend ostream& operator<<(ostream& cout, const Matrix& m);
//};
//ostream& operator<<(ostream& cout,const Matrix& m)
//{
//    for (int i = 0; i < m.rows; i++)
//    {
//        for (int j = 0; j < m.columns; j++)
//        {
//            cout << m.arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//    return cout;
//}
//Matrix operator+ (const Matrix& m1, const Matrix& m2)
//{
//    Matrix M1(m1.rows,m1.columns);
//    for (int i = 0; i < M1.rows; i++)
//        for (int j = 0; j < M1.columns; j++)
//            M1[i][j] = m1.arr[i][j] + m2.arr[i][j];
//    return M1;
//}
//Matrix operator* (const Matrix& m1, const Matrix& m2)
//{
//    Matrix M2(m1.rows,m2.columns);
//    for(int o=0;o<M2.rows;o++)
//        for (int p = 0; p < M2.columns; p++)
//        {
//            M2[o][p] = 0;
//            for (int i = 0; i < m1.columns; i++)
//                    M2[o][p] += m1.arr[o][i] * m2.arr[i][p];
//        }
//    return M2;
//}
//
//int main() {
//
//    int a, b;
//
//    cin >> a >> b;
//
//    Matrix m1(a, b), m2(a, b), m3(b, a);
//
//    int i, j;
//
//    for (i = 0; i < m1.getRows(); i++)
//
//        for (j = 0; j < m1.getColumns(); j++)
//
//            cin >> m1[i][j];
//
//    for (i = 0; i < m2.getRows(); i++)
//
//        for (j = 0; j < m2.getColumns(); j++)
//
//            cin >> m2[i][j];
//
//    for (i = 0; i < m3.getRows(); i++)
//
//        for (j = 0; j < m3.getColumns(); j++)
//
//            cin >> m3[i][j];
//
//    cout << "Matrix M1:" << endl;
//
//    cout << m1;
//
//    cout << "Matrix M2:" << endl;
//
//    cout << m2;
//
//    cout << "Matrix M3:" << endl;
//
//    cout << m3;
//
//    cout << "Result of Matrix Addition:" << endl;
//
//    cout << m1 + m2;
//
//    cout << "Result of Matrix Multiplication:" << endl;
//
//    cout << m1 * m3;
//
//    return 0;
//
//}
//
