cmake_minimum_required(VERSION 2.8.7)

include(cmake/git_compile.cmake)

git_cmake_project(
        PROJECT_NAME kport
        GIT_URL      https://github.com/kodo-0000/kport.git
        GIT_BRANCH   master
        INSTALL_DIR  ${PROJECT_BINARY_DIR}
)