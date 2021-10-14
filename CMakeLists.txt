cmake_minimum_required(VERSION 3.10)

project(BDO_UnPAZ)

aux_source_directory(./ project_sources)

message("sources file:${project_sources}")

add_executable(UnPAZ ${project_sources})

target_link_libraries(UnPAZ libboost_filesystem.a libboost_system.a libz.a)
