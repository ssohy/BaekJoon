#include <iostream>
using namespace std;
int main()
{
    int N = 0;
    cin >> N;
    char star[4 * N - 3][4 * N - 3];
    fill(&star[0][0], &star[4 * N - 3 - 1][4 * N - 3], ' ');

    int x = 0, y = 4 * N - 4;
    for (int i = 0; i < N; i++)
    {
        for (int j = x; j <= y; j++)
        {
            star[x][j] = star[j][x] = star[j][y] = star[y][j] = '*';
        }
        x += 2;
        y -= 2;
    }

    for (int i = 0; i < 4 * N - 3; i++)
    {
        for (int j = 0; j < 4 * N - 3; j++)
        {
            cout << star[i][j];
        }
        cout << '\n';
    }
}