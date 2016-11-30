/**
 *	@author	shuliang
 *	@brief	this file is generated by KPC compiler
 */
#ifndef VDSP_KPC_IOCTL
#define VDSP_KPC_IOCTL

#include <linux/ioctl.h>
#include "vdsp.h"

#define VDSP_IOCTL_MAGIC 0x93

typedef enum e_vdsp_ioctl
{
	VDSP_IOCTL_ENCTYPE_SET			= _IOW(VDSP_IOCTL_MAGIC, 0,  int[4]),
	VDSP_IOCTL_DECTYPE_SET			= _IOW(VDSP_IOCTL_MAGIC, 1,  int[4]),
	VDSP_IOCTL_CODECTYPE_SET			= _IOW(VDSP_IOCTL_MAGIC, 2,  int[4]),
	VDSP_IOCTL_CODECTYPE_GET			= _IOW(VDSP_IOCTL_MAGIC, 3,  int[4]),
	VDSP_IOCTL_CODEC_CAP_GET			= _IOW(VDSP_IOCTL_MAGIC, 4,  T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_CODEC_TYPE2PT			= _IOW(VDSP_IOCTL_MAGIC, 5,  int[4]),
	VDSP_IOCTL_PTIME_SET				= _IOW(VDSP_IOCTL_MAGIC, 6,  int[4]),
	VDSP_IOCTL_PTIME_GET				= _IOW(VDSP_IOCTL_MAGIC, 7,  int[4]),
	VDSP_IOCTL_MEDIA_SET				= _IOW(VDSP_IOCTL_MAGIC, 8,  int[4]),
	VDSP_IOCTL_MEDIA_INIT			= _IOW(VDSP_IOCTL_MAGIC, 9,  T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_MEDIA_START			= _IOW(VDSP_IOCTL_MAGIC, 10, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_MEDIA_STOP			= _IOW(VDSP_IOCTL_MAGIC, 11, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_MEDIA_XMIT_MODE_SET	= _IOW(VDSP_IOCTL_MAGIC, 12, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_MEDIA_XMIT_MODE_GET	= _IOW(VDSP_IOCTL_MAGIC, 13, T_VDSP_IOCTL_PARAM),	
	VDSP_IOCTL_MEDIA_ENC				= _IOW(VDSP_IOCTL_MAGIC, 14, int[4]),
	VDSP_IOCTL_MEDIA_DEC				= _IOW(VDSP_IOCTL_MAGIC, 15, int[4]),
	VDSP_IOCTL_MEDIA_DUMP			= _IOW(VDSP_IOCTL_MAGIC, 16, int[4]),
	VDSP_IOCTL_MEDIA_RTP_SEND_COUNT	= _IOW(VDSP_IOCTL_MAGIC, 18, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_MEDIA_RTP_RECV_COUNT	= _IOW(VDSP_IOCTL_MAGIC, 19, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_CODEC_PT_SET			= _IOW(VDSP_IOCTL_MAGIC, 20, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_CODEC_PT_GET			= _IOW(VDSP_IOCTL_MAGIC, 21, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_SELECT					= _IOW(VDSP_IOCTL_MAGIC, 22, int[4]),
	VDSP_IOCTL_RFC2833_SET			= _IOW(VDSP_IOCTL_MAGIC, 23, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_MEDIA_RTP_SEND_BYTE_COUNT = _IOW(VDSP_IOCTL_MAGIC, 24, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_MEDIA_RTP_RECV_BYTE_COUNT = _IOW(VDSP_IOCTL_MAGIC, 25, T_VDSP_IOCTL_PARAM),	
	VDSP_IOCTL_MEDIA_RECV_PTIME = _IOW(VDSP_IOCTL_MAGIC, 26, T_VDSP_IOCTL_PARAM),	
	//VDSP_IOCTL_MEDIA_JITTER_ENABLE = _IOW(VDSP_IOCTL_MAGIC, 27, T_VDSP_IOCTL_PARAM),	
	VDSP_IOCTL_MEDIA_JITTER_SCHEME = _IOW(VDSP_IOCTL_MAGIC, 28, T_VDSP_IOCTL_PARAM),	
	VDSP_IOCTL_MEDIA_JITTER_DEFAULT_LENGTH_SET = _IOW(VDSP_IOCTL_MAGIC, 29, T_VDSP_IOCTL_PARAM),	
	VDSP_IOCTL_MEDIA_JITTER_MAXIMUM_LENGTH_GET = _IOW(VDSP_IOCTL_MAGIC, 30, T_VDSP_IOCTL_PARAM),		
	VDSP_IOCTL_MEDIA_T38_JITTER_DEFAULT_LENGTH_SET = _IOW(VDSP_IOCTL_MAGIC, 31, T_VDSP_IOCTL_PARAM),	
	VDSP_IOCTL_MEDIA_VOICE_PLC_ENABLE = _IOW(VDSP_IOCTL_MAGIC, 32, T_VDSP_IOCTL_PARAM),	
	VDSP_IOCTL_MEDIA_VOICE_DVCC_ENABLE = _IOW(VDSP_IOCTL_MAGIC, 33, T_VDSP_IOCTL_PARAM),	
	VDSP_IOCTL_MEDIA_IGNORE_MARKBIT_SET = _IOW(VDSP_IOCTL_MAGIC, 34, T_VDSP_IOCTL_PARAM),	 
	VDSP_IOCTL_QUERY_MEDIA_INFO			= _IOW(VDSP_IOCTL_MAGIC, 35, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_RESET_MEDIA_INFO			= _IOW(VDSP_IOCTL_MAGIC, 36, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_RFC2833_DTMF_VOLUME_SET 		= _IOW(VDSP_IOCTL_MAGIC, 37, T_VDSP_IOCTL_PARAM),
	VDSP_IOCTL_EQ_CLEAN = _IO(VDSP_IOCTL_MAGIC, 38),
	VDSP_IOCTL_RTP_REDUNDANT_SET			= _IOW(VDSP_IOCTL_MAGIC, 39, T_VDSP_IOCTL_PARAM),
	VDSP_MAX_IOCTL		/* please define I/O controls above this item */	
	
} E_VDSP_IOCTL;

//struct event;

void vdsp_kpc_init(void);

void vdsp_kpc_dest(void);

#endif
