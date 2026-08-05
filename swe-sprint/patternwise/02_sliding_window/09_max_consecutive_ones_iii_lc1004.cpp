#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;
    cout << longestOnes(arr, k);

    return 0;
}

// int longestOnes(vector<int> &arr, int k)
// {
//     int left = 0;
//     int count = 0;
//     int maxOnes = 0;
//     vector<int> freq(2, 0);

//     for (int right = 0; right < arr.size(); right++)
//     {
//         freq[arr[right]]++;
//         if (arr[right] == 0)
//             count++;

//         while (count > k)
//         {
//             freq[arr[left]]--;
//             if (arr[left] == 0)
//                 count--;

//             left++;
//         }

//         maxOnes = max(maxOnes, right - left + 1);
//     }

//     return maxOnes;
// }

// hindsight: dont need freq, reading it anywhere.

int longestOnes(vector<int> &arr, int k)
{
    int left = 0;
    int count = 0;
    int maxOnes = 0;

    for (int right = 0; right < arr.size(); right++)
    {
        if (arr[right] == 0)
            count++;

        while (count > k)
        {
            if (arr[left] == 0)
                count--;

            left++;
        }

        maxOnes = max(maxOnes, right - left + 1);
    }

    return maxOnes;
}
