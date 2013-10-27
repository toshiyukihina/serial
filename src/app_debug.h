#ifndef __APP_DEBUG_H__
#define __APP_DEBUG_H__

#ifdef APP_CONFIG_USE_SYSLOG
#include <syslog.h>
#define APP_LOG_OPEN() openlog("serial-sample", LOG_PID, LOG_USER)
#define APP_LOG_CLOSE() closelog()
#define APP_LOG_PRINT(priority, format, ...) \
  syslog(priority, " %s:%s():L%d " format "\n", __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define APP_LOG_ERROR(format, ...) APP_LOG_PRINT(LOG_ERR, format, ##__VA_ARGS__)
#define APP_LOG_DEBUG(format, ...) APP_LOG_PRINT(LOG_DEBUG, format, ##__VA_ARGS__)
#else /* APP_CONFIG_USE_SYSLOG */
#define APP_LOG_OPEN()
#define APP_LOG_CLOSE()
#define APP_LOG_PRINT(type, tag, format, ...) \
  fprintf(stderr, "[" type "] <" tag "> %s:%s():L%d " format "\n", __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define APP_LOG_ERROR(format, ...) APP_LOG_PRINT("**ERROR**", "serial-sample", format, ##__VA_ARGS__)
#define APP_LOG_DEBUG(format, ...) APP_LOG_PRINT("DEBUG", "serial-sample", format, ##__VA_ARGS__)
#endif /* APP_CONFIG_USE_SYSLOG */

#endif /* __APP_DEBUG_H__ */
