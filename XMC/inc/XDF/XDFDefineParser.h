#ifndef _XDF_DEFINE_PARSER_H_
#define _XDF_DEFINE_PARSER_H_

#include <IO\XMCFile.h>

namespace XDF
{
	class IDefineParser : public XMC::IReference
	{
		XMC_INTERFACE(IDefineParser, 101);
		XMC_INTERFACE_METHOD(Parse)(cstr16 str)				= 0;
		XMC_INTERFACE_METHOD(Parse)(IFile *file)			= 0;
		XMC_INTERFACE_METHOD(IsValid)(s32 &out)		const	= 0;
	};
}

#endif