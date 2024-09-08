#include <iostream>
using namespace std;
class matrix
{
    int m1[2][2];
    int m2[2][2];
    int sum[2][2];
    int n;
    public:
    void input()
    {
        cout << "Enter the size of the matrix: ";
        cin >> n;
        cout << endl;
        cout << "Enter the value of matrix1" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m1[i][j];
            }
        }
        cout << "Enter the value of matrix2" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m2[i][j];
            }
        }
    }
    void calculate_sum()
    {
        cout << "Sum of matrix is:- " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << m1[i][j] + m2[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    matrix m;
    m.input();
    m.calculate_sum();
    return 0;
}