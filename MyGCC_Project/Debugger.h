#pragma once

#ifndef DEBUGGER_H_
#define DEBUGGER_H_

#include"Utility.h"
#include"Exception.h"
#include"Logger.h"

#ifndef ThrowIfFailed

#define ThrowIfFailed(x)					\
{											\
HRESULT __hr = (x);						\
std::wstring wfn = AnsiToWString(__FILE__);	\
if (FAILED(__hr)) {throw bException(__hr, L#x, wfn, std::wstring(), __LINE__)}\
}

#endif // !ThrowIfFailed



#endif // !DEBUGGER_H_