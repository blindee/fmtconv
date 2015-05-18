/*****************************************************************************

        CpuId.h
        Author: Laurent de Soras, 2012

--- Legal stuff ---

This program is free software. It comes without any warranty, to
the extent permitted by applicable law. You can redistribute it
and/or modify it under the terms of the Do What The Fuck You Want
To Public License, Version 2, as published by Sam Hocevar. See
http://sam.zoy.org/wtfpl/COPYING for more details.

*Tab=3***********************************************************************/



#if ! defined (fstb_CpuId_HEADER_INCLUDED)
#define	fstb_CpuId_HEADER_INCLUDED

#if defined (_MSC_VER)
	#pragma once
	#pragma warning (4 : 4250)
#endif



/*\\\ INCLUDE FILES \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/

#include "fstb/def.h"



namespace fstb
{



class CpuId
{

/*\\\ PUBLIC \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/

public:

	               CpuId ();
	               CpuId (const CpuId &other);
	virtual        ~CpuId () {}

	CpuId &        operator = (const CpuId &other);

#if (fstb_ARCHI == fstb_ARCHI_X86)
	static void		call_cpuid (unsigned int fnc_nbr, unsigned int &v_eax, unsigned int &v_ebx, unsigned int &v_ecx, unsigned int &v_edx);
#endif

	bool           _mmx_flag;
	bool           _isse_flag;
	bool           _sse_flag;
	bool           _sse2_flag;
	bool           _sse3_flag;
	bool           _ssse3_flag;
	bool           _sse41_flag;
	bool           _sse42_flag;
	bool           _sse4a_flag;
	bool           _fma3_flag;
	bool           _fma4_flag;
	bool           _avx_flag;
	bool           _avx2_flag;
	bool           _avx512f_flag;
	bool           _f16c_flag;    // Half-precision FP
	bool           _cx16_flag;    // CMPXCHG16B



/*\\\ PROTECTED \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/

protected:



/*\\\ PRIVATE \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/

private:



/*\\\ FORBIDDEN MEMBER FUNCTIONS \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/

private:

	bool           operator == (const CpuId &other) const;
	bool           operator != (const CpuId &other) const;

};	// class CpuId



}	// namespace fstb



//#include "fstb/CpuId.hpp"



#endif	// fstb_CpuId_HEADER_INCLUDED



/*\\\ EOF \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/