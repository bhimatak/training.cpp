#include <windows.h>
#include <dbghelp.h>
#include <iostream>
#include <fstream>

#pragma comment(lib, "dbghelp.lib")

LONG WINAPI CustomUnhandledExceptionFilter(EXCEPTION_POINTERS* ExceptionInfo) {
    // Create dump file
    HANDLE hFile = CreateFile(
        L"crashdump.dmp",
        GENERIC_WRITE,
        0,
        nullptr,
        CREATE_ALWAYS,
        FILE_ATTRIBUTE_NORMAL,
        nullptr
    );

    if (hFile != INVALID_HANDLE_VALUE) {
        MINIDUMP_EXCEPTION_INFORMATION dumpInfo;
        dumpInfo.ThreadId = GetCurrentThreadId();
        dumpInfo.ExceptionPointers = ExceptionInfo;
        dumpInfo.ClientPointers = FALSE;

        // Write minidump
        BOOL success = MiniDumpWriteDump(
            GetCurrentProcess(),
            GetCurrentProcessId(),
            hFile,
            MiniDumpWithFullMemory,
            &dumpInfo,
            nullptr,
            nullptr
        );

        if (success)
            std::cout << "Dump file created: crashdump.dmp" << std::endl;
        else
            std::cerr << "MiniDumpWriteDump failed. Error: " << GetLastError() << std::endl;

        CloseHandle(hFile);
    }
    else {
        std::cerr << "Failed to create dump file. Error: " << GetLastError() << std::endl;
    }

    return EXCEPTION_EXECUTE_HANDLER;
}

int main() {
    // Register our crash handler
    SetUnhandledExceptionFilter(CustomUnhandledExceptionFilter);

    std::cout << "About to crash..." << std::endl;

    // Force a crash: null pointer dereference
    int* p = nullptr;
    *p = 42;  // Crash here

    return 0;
}