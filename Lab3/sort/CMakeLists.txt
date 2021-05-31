
project(Sort)

set(HEADER_FILES
        sort.h
        )

set(SOURCE_FILES
        sort.cpp
        )

add_library(sort STATIC ${SOURCE_FILES} ${HEADER_FILES})