#pragma once

#include <Windows.h>

void memWrite(DWORD address_to_write_to, int value);

DWORD memRead(DWORD address_to_read);
