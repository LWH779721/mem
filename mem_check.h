#ifndef __MEM_ALLOC_CHECK_H__
#define __MEM_ALLOC_CHECK_H__

#if defined(__cplusplus)
extern "C" {
#endif



#define malloc(_size) mmalloc(_size , __FILE__, __LINE__)
#define free(_p) mfree(_p)


#if defined(__cplusplus)
}
#endif

#endif