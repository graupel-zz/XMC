#ifndef _XMC_ARRAY_H_
#define _XMC_ARRAY_H_

namespace XMC
{
	class IArray : public IReference
	{
		XMC_INTERFACE(PushBack)(IReferenceObject *pObject)						= 0;
		XMC_INTERFACE(PushFront)(IReferenceObject *pObject)						= 0;
		XMC_INTERFACE(PopBack)(IReferenceObject **ppObject)						= 0;
		XMC_INTERFACE(PopFront)(IReferenceObject **ppObject)					= 0;
		XMC_INTERFACE(Insert)(s32 before)										= 0;
		XMC_INTERFACE(Remove)(s32 index)										= 0;
		XMC_INTERFACE(RemoveAll)(void)											= 0;
		XMC_INTERFACE(SetAt)(s32 index, IReferenceObject *pObject)		const	= 0;
		XMC_INTERFACE(GetAt)(s32 index, IReferenceObject **ppObject)	const	= 0;
		XMC_INTERFACE(IsEmpty)()										const	= 0;
		XMC_INTERFACE(Count)(s32 &count)								const	= 0;
	};
}

#endif