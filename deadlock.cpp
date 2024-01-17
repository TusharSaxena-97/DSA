#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex1;
std::mutex mutex2;

void thread1() {
    std::lock_guard<std::mutex> lock1(mutex1);
    std::this_thread::sleep_for(std::chrono::milliseconds(1)); // Simulate some work
    std::lock_guard<std::mutex> lock2(mutex2);
    std::cout << "Thread 1 has both locks." << std::endl;
}

void thread2() {
    std::lock_guard<std::mutex> lock2(mutex2);
    std::this_thread::sleep_for(std::chrono::milliseconds(1)); // Simulate some work
    std::lock_guard<std::mutex> lock1(mutex1);
    std::cout << "Thread 2 has both locks." << std::endl;
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();

    std::cout<<"There is no deadlock";

    return 0;
}
