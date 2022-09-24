file(GLOB SOURCES CONFIGURE_DEPENDS *.cpp)
file(GLOB HEADERS CONFIGURE_DEPENDS *.h)

add_library(microlib2 ${SOURCES} ${HEADERS})
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES})

target_include_directories(microlib2
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include>
)

add_library(microlib2::microlib2 ALIAS microlib2)

install(TARGETS microlib2 EXPORT microlib2-targets
    RUNTIME DESTINATION bin
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)
install(EXPORT microlib2-targets
    DESTINATION lib/cmake/microlib2
    NAMESPACE microlib2::
    FILE microlib2-config.cmake
)

install(DIRECTORY .
    DESTINATION include/ul2
    FILES_MATCHING PATTERN *.h
)
