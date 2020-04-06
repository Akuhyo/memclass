#include <Windows.h>

void memWrite(DWORD address_to_write_to, int value)
{
	*(DWORD*)(address_to_write_to) = value;
}

DWORD memRead(DWORD address_to_read)
{
	return *(DWORD*)(address_to_read);
}
