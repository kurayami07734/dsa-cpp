#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi std::vector<int>
#define vd std::vector<double>
#define vll std::vector<ll>



int main()
{
    fastio;
    int n{0}, m{0}, k{0};
    cin >> n >> m >> k;
    vi people(n), apartments(m);
    int count = 0;
    for (int i = 0; i < n; i++)
        cin >> people[i];
    for (int i = 0; i < m; i++)
        cin >> apartments[i];
    

    cout << count << "\n";

    return 0;
}