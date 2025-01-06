#include <iostream>
#include <thread>
#include <future>

// A sample function to be executed concurrently
        static int scounter;
        static int scountermain;

int calculateSquare(int number) {
    
    while(1){
        scounter++;
    }




    return number * number;
}
void print_message() {
    while(1)
    {
        std::cout << "Hello from thread!" << std::endl;
        
    }
}

int main() {
    int input = 10;

    //std::future<int> result = std::async(std::launch::async, calculateSquare, input);
    std::thread t(print_message); // Create a new thread and execute

    while (1)
    {
        scountermain++;
        // Launch the function asynchronously and get a future for the result
        std::cout << "Hello from main!" << std::endl;


    }
    t.join(); // Wait for the thread to finish execution

    return 0;
}
