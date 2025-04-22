#include "types.h"
#include "riscv.h"
#include "custom_logger.h"
#include "defs.h"



void log_message(log_level level, const char *message) {
// Implement the log_message function here
    //char *s_1 = "40213431";
    //char *s_2 = "40213427";

    if(level == LOG_INFO) {
        printf ("INFO - %s" , message);
    }
    else 
    if(level == LOG_WARN) {
        printf ("WARNING - %s \n" , message);
    }
    else 
    if (level == LOG_ERROR) {
        printf ("ERROR - %s \n" , message);
    }
}