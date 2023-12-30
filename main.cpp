#include <syslog.h>

int main() {
    // Open syslog with a specified ident (usually the program name) and logging options
    openlog("my_cpp_app", LOG_PID | LOG_CONS, LOG_USER);

    // Log a message with severity LOG_INFO
    syslog(LOG_INFO, "This is an informational message");

    // Log a message with severity LOG_ERR
    syslog(LOG_ERR, "An error occurred!");

    // Close syslog when done
    closelog();

    return 0;
}
