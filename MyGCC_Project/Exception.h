#pragma once
#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include"Utility.h"

class bException {

public:
	std::wstring mFunctionName;
	std::wstring mMsg;
	std::wstring mFileName;
	int mLineNumber = -1;

	HRESULT mHr;
	bException() = default;
	bException(HRESULT hr, std::wstring FunctionName, std::wstring FileName, std::wstring Msg, int LineNumber);

	std::wstring ToString()const;

};

#endif