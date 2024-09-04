#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int A,B,C;
    cin >> A >> B >> C;
    vector<int> nums={A,B,C};
    sort(nums.begin(),nums.end());
    for (int i = 0; i < 3; i++)
    {
        cout << nums[i] << endl;
    }
    cout << "\n";
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    return 0;
}