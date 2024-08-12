/*

Date & Time
    - work with date and time using the 'chrono' library

    
    Duration    
        - represents a span of time
        - std::chrono::duration
            ex: std::chrono::seconds
                std::chrono::minutes
                std::chrono::hours

    Time Point
        - represents a specific point in time
        - std::chrono::system_clock
            - system-wide real time wall clock
        - std::chrono::steady_clock
            - a monotonic clock that is never adjusted
        - std::chrono::high_resolution_clock
            - clock with shortest tick period

    Clock
        - time_point (specific point in time)
        - duration 
        - now() - static function that returns the current time point  

    Converting Time Points to Calendar Time
        - std::chrono::system_clock::to_time_t

*/

#include <iostream>
#include <chrono>
#include <ctime>

int main(){
    std::chrono::system_clock::time_point then;
    std::chrono::system_clock::time_point now;
    std::time_t now_c;

    while(true){
        now = std::chrono::system_clock::now();
        now_c = std::chrono::system_clock::to_time_t(now);

        // Only update the time on the console if the time has changed
        if(now != then){
            // Convert to string and remove the newline character
            std::string time_str = std::ctime(&now_c);
            time_str.pop_back();

            // Print the time on the same line
            std::cout << "\rCurrent time: " << time_str << std::flush;

            // Update 'then' to the current time
            then = now;
        }
    }

    return 0;
}