// 演示函数模板的定义和模板函数的实例化

#include <iostream>
using namespace std;

template < class DataType >
void Swap( DataType& x, DataType& y )
{
    DataType tmp = x;
    x = y;
    y = tmp;
}

int main( )
{
    int a = 6;
    int b = 9;
    Swap( a, b );
    cout << a << ends << b << endl;
    return 0;
}
