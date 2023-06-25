/*
    Configuration
*/

#if defined(CMAKE_CONFIG_DEBUG)
    #define CONFIG_DEBUG "Debug"
    #define CONFIG_CURRENT CONFIG_DEBUG
#elif defined(CMAKE_CONFIG_RELEASE)
    #define CONFIG_RELEASE "Release"
    #define CONFIG_CURRENT CONFIG_RELEASE
#else
    #error Unknown configuration!
#endif