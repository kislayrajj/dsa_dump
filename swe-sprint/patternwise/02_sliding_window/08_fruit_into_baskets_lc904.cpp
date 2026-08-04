#include <bits/stdc++.h>
using namespace std;

int totalFruit(vector<int> &fruits);

int main()
{
    vector<int> fruits = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4};
    cout << totalFruit(fruits);

    return 0;
}

int totalFruit(vector<int> &fruits)
{
    int left = 0;
    int n = fruits.size();
    int maxFruit = 0;
    int typesOfFruit = 0;
    int totalBasket = 2;

    vector<int> fruitsFrequency(n, 0);

    for (int right = 0; right < n; right++)
    {
        if (fruitsFrequency[fruits[right]] == 0)
            typesOfFruit++;

        fruitsFrequency[fruits[right]]++;

        while (typesOfFruit > totalBasket)
        {
            fruitsFrequency[fruits[left]]--;

            if (fruitsFrequency[fruits[left]] == 0)
                typesOfFruit--;

            left++;
        }

        maxFruit = max(maxFruit, right - left + 1);
    }

    return maxFruit;
}