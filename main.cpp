#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex order_mutex;
std::condition_variable cv;
int current_order = 1;

void ThreadTask(int num) {
    std::unique_lock<std::mutex> lock(order_mutex);
    cv.wait(lock, [num] { return current_order == num; });
    std::cout << "thread " << num << std::endl;
    current_order++;
    cv.notify_all();
}

int main() {

    std::thread th1(ThreadTask, 1);
    std::thread th2(ThreadTask, 2);
    std::thread th3(ThreadTask, 3);

    th1.join();
    th2.join();
    th3.join();

    return 0;
}