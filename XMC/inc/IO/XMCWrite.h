#ifndef _XMC_WRITE_H_
#define _XMC_WRITE_H_

#include <comm/XMCReference.h>

namespace XMC
{
	namespace IO
	{
		class IWrite : public IReference
		{
			XMC_INTERFACE(IWrite, 202);
			XMC_INTERFACE_METHOD(Write)(u8 * buffer, u64 &bufferSize)		const	= 0;
			XMC_INTERFACE_METHOD(WriteString)(cstr16 str, u64 strLength)	const	= 0;
		};
	}
}

#endif