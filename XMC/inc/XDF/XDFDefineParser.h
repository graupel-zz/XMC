#ifndef _XDF_DEFINE_PARSER_H_
#define _XDF_DEFINE_PARSER_H_

#include <comm\XMCReferenceObject.h>

namespace XDF
{
	class IDefineParser : public XMC::IReference
	{
		XMC_INTERFACE(IDefineParser);
		XMC_INTERFACE_ID(101);
		XMC_INTERFACE_METHOD(Parse)(cstr16 filename)			= 0;
		XMC_INTERFACE_METHOD(IsValid)(s32 &out)			const	= 0;
	};
}

#endif