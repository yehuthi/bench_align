#pragma once
#include <stddef.h>

inline size_t align_down(size_t addr, size_t alignment) {
	return addr & ~(alignment - 1);
}

inline size_t align_down_arithmetic(size_t addr, size_t alignment) {
	return addr - (addr % alignment);
}

inline size_t align_up_twos_complement(size_t addr, size_t alignment) {
	return addr + (((~addr) + 1) & (alignment - 1));
}

inline size_t align_up_arithmetic(size_t addr, size_t alignment) {
	return addr ? addr + (alignment - (addr % alignment)) : 0;
}

inline size_t align_up_from_down(size_t addr, size_t alignment) {
	const size_t down = align_down(addr, alignment);
	return down == addr ? addr : down + alignment;
}
