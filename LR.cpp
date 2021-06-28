
#include <iostream>
using namespace std;
int max(int x, int y, int z)
{
    int m = 0;
    if ((x > y) && (x > z)) m = x;
    if ((y > x) && (y > z)) m = y; 
    if ((z > x) && (c > y)) m = z; 
    return m;
}
int main()
{
    setlocale (LC_ALL, "Russian"); 
    int x, y, z;
    cout << "Введите числа:" << endl;
    cin >>x >> y>> z;
    cout << "Максимальное число=" << max(x, y, z)<<endl; //вызов функции
    system("pause");
    return 0;

}
