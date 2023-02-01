cmake_minimum_required(VERSION 3.8)
project(warehouse_ros_graph)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(warehouse_ros REQUIRED)

add_library(${PROJECT_NAME} SHARED
    src/database_connection.cpp
)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
target_include_directories(warehouse_ros_graph PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
target_compile_features(warehouse_ros_graph PUBLIC c_std_99 cxx_std_17) # Require C99 and C++17
ament_target_dependencies(${PROJECT_NAME}
    warehouse_ros
)

install(TARGETS warehouse_ros_graph
    DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
    find_package(ament_lint_auto REQUIRED)

    # the following line skips the linter which checks for copyrights
    # comment the line when a copyright and license is added to all source files
    set(ament_cmake_copyright_FOUND TRUE)

    # the following line skips cpplint (only works in a git repo)
    # comment the line when this package is in a git repo and when
    # a copyright and license is added to all source files
    set(ament_cmake_cpplint_FOUND TRUE)
    ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(
    ament_cmake
    warehouse_ros
)

ament_package()
