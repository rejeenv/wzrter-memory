#include <iostream>

#include "Memory/Memory.hxx"
#include "offsets.hpp"

int main(void) {
	Memory::PMemory memory{};
	std::uintptr_t client{};

	try {
		memory = new Memory::Memory();
		memory->Attach(L"cs2.exe");
		client = memory->GetModule(L"client.dll");
	}
	catch (const std::exception& exception) {
		std::cerr << exception.what() << std::endl;
	}
	

	while (true)
	{

	}
	return 0;
}