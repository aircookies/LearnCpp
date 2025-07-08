#include <iostream>
#include <vector>

using namespace std;

class MyCompare
{
public:
    virtual bool operator()() = 0;
};

int main()
{
    vector<int> v{1, 2, 3, 4, 5};

    return 0;
}