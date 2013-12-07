#ifndef _XMC_PACKAGE_H_
#define	_XMC_PACKAGE_H_

namespace XMC
{
	namespace IO
	{
		class IPackage : public IReference
		{
			XMC_INTERFACE(IPackage, 301);
			XMC_INTERFACE_METHOD(Initialize)(cstr16 filename)	const	= 0;
			XMC_INTERFACE_METHOD(Shutdown)()					const	= 0;
		};
	}
}

#endif