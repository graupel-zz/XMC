#ifndef _XDF_DATAPARSER_H_
#define _XDF_DATAPARSER_H_

#include <comm\XMCReference.h>

namespace XDF
{
	class IDataParser : public XMC::IReference
	{
		XMC_INTERFACE(IDataParser, 100);
		XMC_INTERFACE_METHOD(Parse)(cstr16 str)				= 0;
		XMC_INTERFACE_METHOD(Parse)(IFile *file)			= 0;
		XMC_INTERFACE_METHOD(IsValid)(s32 &out)		const	= 0;
	};
}

#endif