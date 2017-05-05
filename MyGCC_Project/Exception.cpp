#include "Exception.h"

bException::bException(HRESULT hr, std::wstring FunctionName, std::wstring FileName,std::wstring Msg, int LineNumber):
	mHr(hr),
	mFunctionName(FunctionName),
	mFileName(FileName),
	mMsg(Msg),
	mLineNumber(LineNumber)
{
}

std::wstring bException::ToString() const
{
	return mFunctionName + L"failed in" + mFileName + L"Line : " + std::to_wstring(mLineNumber);
}
