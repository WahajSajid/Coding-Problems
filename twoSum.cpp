#include <iostream>
using namespace std;

int main()
{

    int nums[] = {3, 2, 3};
    int indexes[2];
    int target = 6;
    int sum;
    for (int i = 0; i <= 2; i++)
    {
        if (i == 3)
        {
            break;
        }
            for (int j = i + 1; j <= 2; j++)
            {
                int sum = nums[i]+nums[j];
                if (sum == target)
                {
                    indexes[0] = i;
                    indexes[1] = j;
                    break;
                }
            }
    }

    for (int i = 0; i <= 1; i++)
    {
        cout << indexes[i] << endl;
    }

    return 0;
}