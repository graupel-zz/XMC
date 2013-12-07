#ifndef _XMC_MACRO_H_
#define _XMC_MACRO_H_

#define XMC_INTERFACE(name)	\
	private:	\
	interface(const interface &rhs);	\
	interface & operator =(const interface &rhs);

#define	XMC_INTERFACE_ID(id)	\
	public:	\
	static	s32	ID	=	(id);

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