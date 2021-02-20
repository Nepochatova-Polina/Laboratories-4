project(DateConverter)

set(HEADER_FILES
        MathLib.h
        )

set(SOURCE_FILES
        MathLib.cpp
        )

add_library(Math_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})