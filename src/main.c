#include "logger.h"

int main(void) {
    Logger info_log = {
        .level = LOG_INFO,
    };

    FILE* log_file = fopen("logs/log.txt", "a+");
    add_logfile(&info_log, log_file);

    FILE* log_file1 = fopen("logs/log1.txt", "a+");
    add_logfile(&info_log, log_file1);

    add_logfile(&info_log, stdout);

    logger(&info_log, "Test %s log", "Info");

    close_logger_files(&info_log);
}