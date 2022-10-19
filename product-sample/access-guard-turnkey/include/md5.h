#ifndef __MY_MD5_H__
#define __MY_MD5_H__
#ifdef __cplusplus
extern "C" {
#endif

#ifndef TRUE
#define TRUE    1
#define FALSE   0
#endif

#ifndef BOOL
	#define BOOL int
#endif

//ע UINT4Ҫ�����4�ֽڵģ�unsigned long�п�����64λ��32λ�����³���
#ifndef UINT4
//#define UINT4 unsigned long
#define UINT4 uint32_t 
#endif


#ifndef POINTER
#define POINTER unsigned char *
#endif

/* MD5 context. */
typedef struct {
  UINT4 state[4];                                   /* state (ABCD) */
  UINT4 count[2];        /* number of bits, modulo 2^64 (lsb first) */
  unsigned char buffer[64];                         /* input buffer */
} MD5_CONTEXT;

void MD5Init (MD5_CONTEXT *context);
void MD5Update (MD5_CONTEXT *, unsigned char *, unsigned int);
void MD5Final (unsigned char [16], MD5_CONTEXT *);

#ifdef __cplusplus
}
#endif

#endif 

