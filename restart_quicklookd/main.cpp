//
//  main.cpp
//  restart_quicklookd
//
//  Created by Alan Gardner on 11/23/22.
//

#include <iostream>
#include <chrono>
#include <ctime>

#define ENABLE_LOGGING //comment out to disable logging

int main(int argc, const char * argv[]) {
    
#ifdef ENABLE_LOGGING
    auto start = std::chrono::system_clock::now();
    std::time_t curr_time = std::chrono::system_clock::to_time_t(start);
    std::cerr << "Restarting Quicklook at: " << std::ctime(&curr_time);
#endif
    
    system("killall -KILL QuickLookUIService");
    
    return 0;
}
