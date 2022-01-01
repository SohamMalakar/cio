#include <cio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int print(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

string input(const char *const String)
{
    size_t alloc_length = 1024, data_length = 0;
    string cursor = NULL, line = NULL, data = NULL;

    if (String != NULL)
        print("%s", String);

    data = malloc(alloc_length);

    while (1)
    {
        cursor = data + data_length;
        line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line)
            break;

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
            break;

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data)
        {
            data = '\0';
            break;
        }
    }

    if (data[data_length - 1] == '\n')
    {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data)
            data = "\0";
    }
    else
    {
        data = realloc(data, data_length + 1);

        if (!data)
            data = "\0";
        else
            data[data_length] = '\0';
    }

    return data;
}

char input_char(const char *const String)
{
    char tmp;
    char line[2] = {'\0', '\0'};

    if (String != NULL)
        print("%s", String);

    if (fgets(line, sizeof line, stdin))
        tmp = line[0];

    if (tmp == '\n')
        tmp = '\0';

    return tmp;
}

int input_int(const char *const String)
{
    string data = input(String);

    if (data == NULL)
        return 0;

    int tmp = atoi(data);

    free(data);

    return tmp;
}

long input_long(const char *const String)
{
    string data = input(String);

    if (data == NULL)
        return 0;

    long tmp = atol(data);

    free(data);

    return tmp;
}

long long input_long_long(const char *const String)
{
    string data = input(String);

    if (data == NULL)
        return 0;

    long long tmp = atoll(data);

    free(data);

    return tmp;
}

double input_double(const char *const String)
{
    string data = input(String);

    if (data == NULL)
        return 0;

    double tmp = atof(data);

    free(data);

    return tmp;
}
