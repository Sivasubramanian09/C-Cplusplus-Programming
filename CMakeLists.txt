# CMakeList.txt : CMake project for Task2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Task2")

set(CMAKE_PREFIX_PATH "D:\\Apps\\libtorch")

find_package(Torch REQUIRED)

# Add source to this project's executable.
add_executable (${PROJECT_NAME} "Task2.cpp" "Task2.h" "declarations.cpp")

target_link_libraries(${PROJECT_NAME} ${TORCH_LIBRARIES})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Task2 PROPERTY CXX_STANDARD 17)
endif()

# TODO: Add tests and install targets if needed.

# TODO: Add tests and install targets if needed.
if (MSVC)
  file(GLOB TORCH_DLLS "${TORCH_INSTALL_PREFIX}/lib/*.dll")
  add_custom_command(TARGET Task2
                     POST_BUILD
                     COMMAND ${CMAKE_COMMAND} -E copy_if_different
                     ${TORCH_DLLS}
                     $<TARGET_FILE_DIR:Task2>)
endif (MSVC)
