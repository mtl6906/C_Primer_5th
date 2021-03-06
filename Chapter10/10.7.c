#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using std::cin;
using std::vector;
using std::list;
using std::cout;
using std::endl;

int main()
{
//      vector<int> iv;         拥有零个元素，直接copy会访问非法地址。
        list<int> il;

        int i;

        while(cin >> i)
                il.push_back(i);

        vector<int> iv(il.size());      //      初始化iv大小为il的大小

        copy(il.cbegin(),il.cend(),iv.begin());

        for(const auto & c : iv)
                cout << c << endl;

        vector<int> vec;

        vec.reserve(10);

        fill_n(vec.begin(),10,0);       //      vec的size还是0

        for(const auto& c : vec)
                cout << c << endl;

        return 0;
}
