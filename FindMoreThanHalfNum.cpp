#include <iostream>
using namespace std;
#include <string>
#include <vector>

int MoreThanHalfNum_Solution(vector<int> numbers) 
{
    int count = 0;
    int value = 0;
    int size = numbers.size();
    for(int i = 0; i < size; ++i)
    {
        if(count <= 0)
        {
            ++count;
            value = i;
        }
        else if(count > 0 && numbers[value] == numbers[i])
        {
            ++count;
        }
        else if(count > 0 && numbers[value] != numbers[i])
        {
            --count;
        }
    }
    return numbers[value];
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);
    int ret = MoreThanHalfNum_Solution(v);
    cout<<v[ret]<<endl;
    return 0;
}
