# 定义最低版本
cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

# 定义项目名称 语言
project(cpu_architecture CXX)

# 生成config.h
foreach(key
IN ITEMS
  NUMBER_OF_LOGICAL_CORES
  NUMBER_OF_PHYSICAL_CORES
  TOTAL_VIRTUAL_MEMORY
  AVAILABLE_VIRTUAL_MEMORY
  TOTAL_PHYSICAL_MEMORY
  AVAILABLE_PHYSICAL_MEMORY
  IS_64BIT
  HAS_FPU
  HAS_MMX
  HAS_MMX_PLUS
  HAS_SSE
  HAS_SSE2
  HAS_SSE_FP
  HAS_SSE_MMX
  HAS_AMD_3DNOW
  HAS_AMD_3DNOW_PLUS
  HAS_IA64
  OS_NAME
  OS_RELEASE
  OS_VERSION
  OS_PLATFORM
)
cmake_host_system_information(RESULT _${key} QUERY ${key})
message(RESULT _${key} QUERY ${key})
endforeach()

configure_file(config.h.in config.h @ONLY)

# 增加可执行文件和头文件
add_executable(cpu_architecture "")
target_sources(cpu_architecture
  PRIVATE
    cpu_architecture.cpp
  )
target_include_directories(cpu_architecture
  PRIVATE
       ${PROJECT_BINARY_DIR}
  )
  
