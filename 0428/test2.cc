 ///
 /// @file    test2.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-20 21:51:22
 ///

#include <iostream>
#include <queue>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::priority_queue;


class Point
{
public:
    Point(int ix = 0, int iy = 0)
    : _ix(ix)
    , _iy(iy)
    {}

    friend std::ostream & operator<<(std::ostream & os, const Point & rhs);
    friend bool operator>(const Point & lhs, const Point & rhs); //重载大于号

    friend struct PointCompare;
private:
    int _ix;
    int _iy;
};

std::ostream & operator<<(std::ostream & os, const Point & rhs)
{
    os << "(" << rhs._ix
       << "," << rhs._iy
       << ")";
    return os;
}

bool operator>(const Point & lhs, const Point & rhs)
{
    return lhs._ix > rhs._ix;
}


struct PointCompare
{
    bool operator () (const Point & lhs, const Point & rhs)
    {
        return lhs._ix > rhs._ix;
    }
};

int main(void)
{
    Point pt(1,1);


    vector<Point> vec{
        Point(1, 1),
        Point(-1, 2),
        Point(3, 4),
        Point(-5, 1),
        Point(7, 2)
    };

    //priority_queue<Point, vector<Point>, std::greater<Point> > pq;
    priority_queue<Point, vector<Point>, PointCompare> pq; //添加判断类函数

    for(size_t idx = 0; idx != 5; ++idx)
    {
        pq.push(vec[idx]);
        cout << "当前队列之中优先级别最高的元素是：" << pq.top() << endl;
    }

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}

