#pragma once

#include <cstdio>
#ifndef __linux__
#include <tchar.h>
#endif
#include <iostream>
#include <string>

#if _MSC_VER >= 1910
#include <filesystem>
#else
#include <boost/filesystem.hpp>///boost headers (for GCC add linker arguments: -lboost_system-mt -lboost_filesystem-mt)
#endif