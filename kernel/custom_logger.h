#ifndef CUSTOM_LOGGER_H
#define CUSTOM_LOGGER_H

typedef enum {
    LOG_INFO,
    LOG_WARN,
    LOG_ERROR
} log_level;

void log_message(log_level level, const char *message);

#endif 