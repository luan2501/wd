 ///
 /// @file    test.cc
 /// @author  luan2501(1020105056@qq.com)
 /// @date    2017-06-20 21:44:14
 ///
#include <iostream>
#include <queue>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::priority_queue;

int test()
{
    int arr[10] = {0, 1, 3, 2, 5, 9, 8, 6, 7, 4};
    //优先级队列默认情况下使用的比较函数是小于符号
    //其实现原理：堆排序,　每一次有新元素添加进来时
    //堆顶元素要跟新元素作比较,如果满足比较函数，就
    //将新元素替换到堆顶元素,原堆顶元素会放到堆底，
    //进行堆调整
    priority_queue<int> pq;

    for(size_t idx = 0; idx != 10; ++idx)
    {
        pq.push(arr[idx]);
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


int test1(void)
{
    int arr[10] = {0, 1, 3, 2, 5, 9, 8, 6, 7, 4};
   
    priority_queue<int, vector<int>, std::greater<int> > pq;     //

    for(size_t idx = 0; idx != 10; ++idx)
    {
        pq.push(arr[idx]);
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

int main()
{
	test1();
	return 0;

}
