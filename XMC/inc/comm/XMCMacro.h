#ifndef _XMC_MACRO_H_
#define _XMC_MACRO_H_

#define XMC_INTERFACE(name, id)	\
	private:	\
		name(const name &rhs);	\
		name & operator =(const name &rhs);	\
	public:	\
		static	const	s32	ID	=	(id);

#define XMC_INTERFACE_CONST_NUM(type, name, num)	\
	public:	\
		static	const	type	name = (num);

#define XMC_INTERFACE_METHOD(method)	\
	public:	\
		virtual const s32 method

#define XMC_TRUE	(0)
#define XMC_FALSE	(-1)

#define XMC_ERR(res)	\
	((res) < 0)

#define XMC_NOR(res)	\
	((res) == 0)

#define XMC_WRN(res)	\
	((res) > 0)

#endif