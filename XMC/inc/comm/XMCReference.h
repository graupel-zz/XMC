#ifndef _XMC_REFERENCE_OBJECT_H_
#define	_XMC_REFERENCE_OBJECT_H_

#include <comm/XMCBaseType.h>
#include <comm/XMCMacro.h>

namespace XMC
{
	class IReference
	{
		XMC_INTERFACE(IReference);
		XMC_INTERFACE_ID(0);
		XMC_INTERFACE_METHOD(AddRef)(void)							const = 0;
		XMC_INTERFACE_METHOD(Release)(void)							const = 0;
		XMC_INTERFACE_METHOD(Clone)(IReferenceObject **ppObject)	const = 0;
		XMC_INTERFACE_METHOD(Cast)(s32 id, void **ppVoid)			const = 0;
		XMC_INTERFACE_METHOD(IsHasId)(s32 id, s32 &out)				const = 0;
	};
}

#endif