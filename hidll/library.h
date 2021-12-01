#ifndef HIDLL_LIBRARY_H
#define HIDLL_LIBRARY_H

#if defined(_MSC_VER) || defined(_WIN32)
#define API_EXPORT __declspec (dllexport)
#define API_IMPORT __declspec (dllimport)
#else
#define API_EXPORT
#define API_IMPORT
#endif

extern  "C" API_IMPORT void  hello();

#endif //HIDLL_LIBRARY_H
