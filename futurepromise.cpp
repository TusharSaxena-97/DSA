#include <iostream>
#include <thread>
#include <future>
#include <atomic>
#include <vector>

void Worker(std::promise<int>& p) {
    // Simulate some work
    std::this_thread::sleep_for(std::chrono::seconds(2));

    // Fulfill the promise by setting a value
    p.set_value(42);
}

std::atomic<int> a;
std::atomic<std::vector<int>> v;

//a1tomic.atomic<vector<int>> v;
int main() {
    std::promise<int> promise;

    // Launch a worker thread that fulfills the promise
    std::thread worker(Worker, std::ref(promise));

    // Get a future associated with the promise
    std::future<int> future = promise.get_future();

    // Main thread waits for the result
    int result = future.get();
    std::cout << "Received result: " << result << std::endl;

    // Clean up
    worker.join();

    return 0;
}
