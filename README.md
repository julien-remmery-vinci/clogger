C Logger

---

Simple easy of use C logger.

---

Use

#### First, create a logger and give it a log level (LOG_INFO, LOG_WARN, LOG_ERROR, ...)
```C
    Logger info_log = {
        .level = LOG_INFO,
    };
```

#### Add a file to log to.
Default no files logger logs to stdout.
If you need to log to text files AND to stdout, you need to add stdout as a file to log to.
```C
    FILE* log_file = fopen("log.txt", "a+");
    add_logfile(&info_log, log_file);

    //optional
    add_logfile(&info_log, stdout);
```

#### You are ready to log !
Use the same syntax as printf to use string formating ( logger(&logger, "format", values...) )
```C
    logger(&info_log, "Test %s log", "Info");
```

#### Close all files associated to a logger.
```C
    close_logger_files(&info_log);
```