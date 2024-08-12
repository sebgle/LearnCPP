/*

Multithreading
    - concurrent execution of multiple threads
    - improves the performance and efficiency of an application
    - allows multiple tasks to be completed in parallel
    - <thread> 


    Mutex and Locks
        - when multiple threads access shared resources there can be a data race
        - use mutex and locks to synchronize shared resource access
*/


#include <iostream>
#include <thread>
#include <mutex>

void thread_function(){
    std::cout << "thread function" << std::endl;
}

int main(){

    std::thread t(thread_function);
    t.join(); //waits for thread to complete 

    return 0;
}

