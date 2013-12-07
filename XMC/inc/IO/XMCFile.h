#ifndef _XMC_FILE_H_
#define _XMC_FILE_H_

#include <IO/XMCRead.h>
#include <IO/XMCWrite.h>

namespace XMC
{
	namespace IO
	{
		class IFile : public IReference
		{
			XMC_INTERFACE(IFile, 200);
			XMC_INTERFACE_METHOD(Open)(cstr16 filename, s32 flag)			= 0;
			XMC_INTERFACE_METHOD(Close)(void)								= 0;
			XMC_INTERFACE_METHOD(GetRead)(IRead **out)			const	= 0;
			XMC_INTERFACE_METHOD(GetWrite)(IWrite **out)		const	= 0;
			XMC_INTERFACE_METHOD(IsOpen)(s32 &out)					const	= 0;
			XMC_INTERFACE_METHOD(IsReadOnly)(s32 &out)				const	= 0;
			XMC_INTERFACE_METHOD(IsWriteOnly)(s32 &out)				const	= 0;
			XMC_INTERFACE_METHOD(GetFilename)(str16 &out)			const	= 0;
			XMC_INTERFACE_METHOD(GetFileSize)(u64 &out)				const	= 0;
			XMC_INTERFACE_METHOD(IsEOF)(s32 &out)					const	= 0;
			XMC_INTERFACE_CONST_NUM(u32, FLAG_CREATE, 1);
			XMC_INTERFACE_CONST_NUM(u32, FLAG_READ, 2);
			XMC_INTERFACE_CONST_NUM(u32, FLAG_WRITE, 4);
			XMC_INTERFACE_CONST_NUM(u32, FLAG_MAPPING, 8);
		};
	}
}

#endif