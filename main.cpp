#include <syslog.h>
#include <thread>
#include <chrono>

int main() {
    // Open syslog with a specified ident (usually the program name) and logging options

    while (true)
    {
        openlog("my_cpp_app", LOG_PID | LOG_CONS, LOG_USER);
        
        // Log a message with severity LOG_INFO
        syslog(LOG_INFO, "This is an informational message");
    
        // Log a message with severity LOG_ERR
        syslog(LOG_ERR, "An error occurred!");    



        // Sleep for 3 seconds
        std::this_thread::sleep_for(std::chrono::seconds(3));

    }
   

    // Close syslog when done
    closelog();

    return 0;
}
