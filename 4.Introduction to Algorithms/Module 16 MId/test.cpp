#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

bool is_valid(int x, int y, int N, int M)
{
    return x >= 0 && x < N && y >= 0 && y < M;
}

int min_knight_steps_to_attack_queen(int N, int M, int Ki, int Kj, int Qi, int Qj)
{
    vector<vector<int>> distance(N, vector<int>(M, -1));
    vector<vector<bool>> visited(N, vector<bool>(M, false));

    queue<pair<int, int>> q;

    q.push({Ki, Kj});
    distance[Ki][Kj] = 0;
    visited[Ki][Kj] = true;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == Qi && y == Qj)
        {
            return distance[x][y];
        }

        for (int i = 0; i < 8; ++i)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if (is_valid(new_x, new_y, N, M) && !visited[new_x][new_y])
            {
                visited[new_x][new_y] = true;
                distance[new_x][new_y] = distance[x][y] + 1;
                q.push({new_x, new_y});
            }
        }
    }

    return -1;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M, Ki, Kj, Qi, Qj;
        cin >> N >> M >> Ki >> Kj >> Qi >> Qj;

        int result = min_knight_steps_to_attack_queen(N, M, Ki, Kj, Qi, Qj);
        cout << result << endl;
    }

    return 0;
}
