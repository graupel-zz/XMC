#ifndef _XDF_DATAPARSER_H_
#define _XDF_DATAPARSER_H_

#include <comm\XMCReferenceObject.h>

namespace XDF
{
	class IDataParser : public XMC::IReference
	{
		XMC_INTERFACE(IDataParser);
		XMC_INTERFACE_ID(100);
		XMC_INTERFACE_METHOD(Parse)(cstr16 filename)			= 0;
		XMC_INTERFACE_METHOD(IsValid)(s32 &out)			const	= 0;
	};
}

#endif