#pragma once

#include <vector>
#include "ctx.h"
#include "Text.h"
#include "time.h"
#include "helper.h"
#include <Windows.h>

namespace popup
{
	void showPopup(int x, int y, float ts, float cs, std::string t, std::vector<std::string> c);
	void R71();
	void S11();
	void S21();
	void L11();
	void L21();
	void L31();
	void VT11();
	void VT61();
	void VH21();
	void VE31();
	void SAL11();
	void SATP1();
	void end1();

	void R72();
	void S12();
	void S22();
	void L12();
	void L22();
	void L32();
	void VT12();
	void VT62();
	void VH22();
	void VE32();
	void SAL12();
	void SATP2();
	void end2();

	void S13();
	void S23();
	void L13();
	void L23();
	void L33();
	void VT13();
	void VT63();
	void VH23();
	void VE33();
	void SAL13();

	void badEvent();
	void goodEvent();
};