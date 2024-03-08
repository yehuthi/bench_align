cmake_minimum_required(VERSION 3.28)
project(align_bench VERSION 1.0 LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(
	googlebenchmark
	GIT_REPOSITORY git@github.com:google/benchmark.git
	GIT_TAG main
	GIT_SHALLOW true
	GIT_PROGRESS ON
	SYSTEM
)
set(BENCHMARK_ENABLE_TESTING off)
FetchContent_MakeAvailable(googlebenchmark)

add_executable(bench main.cpp)
target_link_libraries(bench benchmark::benchmark)
