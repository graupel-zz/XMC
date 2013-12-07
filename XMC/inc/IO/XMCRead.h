#ifndef _XMC_READ_H_
#define _XMC_READ_H_

#include <comm/XMCReference.h>

namespace XMC
{
	namespace IO
	{
		class IRead : public IReference
		{
			XMC_INTERFACE(IRead, 201);
			XMC_INTERFACE_METHOD(Read)(u64 readSize, u64 bufferSize, u8 * buffer, u64 &readedSize)	const	= 0;
			XMC_INTERFACE_METHOD(ReadString)(u64 stringLength, str16 &out, readedLength)			const	= 0;
		};
	}
}

#endif