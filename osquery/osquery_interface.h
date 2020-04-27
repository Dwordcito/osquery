#pragma once

// Define EXPORTED for any platform
#ifdef _WIN32
#ifdef WIN_EXPORT
#define EXPORTED __declspec(dllexport)
#else
#define EXPORTED __declspec(dllimport)
#endif
#else
#define EXPORTED
#endif

#ifdef __cplusplus
extern "C" {
#endif
    EXPORTED void teardown(void);

    EXPORTED int execute_query(const char* query,
                               char** return_values);

    EXPORTED int initialize(void* callback);

    EXPORTED int free_query_results(char** return_values);
#ifdef __cplusplus
    }
#endif