#pragma once

#ifdef PRINTSLIBRARY_EXPORTS
#define PRINTSLIBRARY_API __declspec(dllexport)
#else
#define PRINTSLIBRARY_API __declspec(dllimport)
#endif

extern "C" PRINTSLIBRARY_API void fnPrintSLibrary();