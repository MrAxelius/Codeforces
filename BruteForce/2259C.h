#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (auto& x : a) std::cin >> x;

        std::vector<int> unos, libres; // posiciones de 1 fijos y de -1
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 1) unos.push_back(i);
            else if (a[i] == -1) libres.push_back(i);
        }

        int mejor = 0, L = -1, R = -1;
        auto probar = [&](int l, int r) {
            if (r - l + 1 > mejor) { mejor = r - l + 1; L = l; R = r; }
        };

        if (unos.empty())
        {
            if (!libres.empty()) probar(libres.front(), libres.back());
        }
        else
        {
            for (size_t k = 0; k + 1 < unos.size(); ++k)
                probar(unos[k], unos[k + 1]);
            if (!libres.empty() && libres.front() < unos.front())
                probar(libres.front(), unos.front());
            if (!libres.empty() && libres.back() > unos.back())
                probar(unos.back(), libres.back());
        }

        for (int i = 0; i < n; ++i)
        {
            if (a[i] == -1) a[i] = (i == L || i == R) ? 1 : 0;
            std::cout << a[i] << (i + 1 < n ? ' ' : '\n');
        }
    }
}