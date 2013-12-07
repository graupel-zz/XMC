#ifndef _XMC_BASETYPE_H_
#define _XMC_BASETYPE_H_

namespace XMC
{
	typedef char				c8
	typedef wchar_t				c16

	typedef __int8				s8;
	typedef unsigned __int8		u8;

	typedef __int16				s16;
	typedef unsigned __int16	u16;

	typedef __int32				s32;
	typedef unsigned __int32	u32;

	typedef __int64				s64;
	typedef unsigned __int64	u64;

	typedef float				f32;
	typedef double				f64;

	typedef const c8 *			cstr8;
	typedef const c16 *			cstr16;
	
	typedef c8 *				str8;
	typedef c16 *				str16;
}

#endif