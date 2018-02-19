#ifndef HELPER_H_
#define HELPER_H_

#if defined(_WIN32) || defined(__CYGWIN__)
    #ifdef __GNUC__
        #define XXX_EXPORT __attribute__ ((dllexport))
    #else
        #define XXX_EXPORT __declspec(dllexport)
    #endif
#else
    #if __GNUC__ >= 4
    #define XXX_EXPORT __attribute__ ((visibility ("default")))
    #else
    #define XXX_EXPORT
    #endif
#endif

#endif /* HELPER_H_ */
