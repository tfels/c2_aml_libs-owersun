/**
* @file amstream.h
* @brief  Porting from decoder driver for codec ioctl commands
* @author Tim Yao <timyao@amlogic.com>
* @version 1.0.0
* @date 2011-02-24
*/
/* Copyright (C) 2007-2011, Amlogic Inc.
* All right reserved
*
*/

/*
 * AMLOGIC Audio/Video streaming port driver.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the named License,
 * or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Author:  Tim Yao <timyao@amlogic.com>
 *
 */

#ifndef AMSTREAM_H
#define AMSTREAM_H

#define PORT_FLAG_IN_USE    0x0001
#define PORT_FLAG_VFORMAT   0x0002
#define PORT_FLAG_AFORMAT   0x0004
#define PORT_FLAG_FORMAT    (PORT_FLAG_VFORMAT | PORT_FLAG_AFORMAT)
#define PORT_FLAG_VID       0x0008
#define PORT_FLAG_AID       0x0010
#define PORT_FLAG_SID       0x0020
#define PORT_FLAG_UD       0x0040
#define PORT_FLAG_DRM       0x0080
#define PORT_FLAG_ID        (PORT_FLAG_VID | PORT_FLAG_AID | PORT_FLAG_SID | PORT_FLAG_UD)
#define PORT_FLAG_INITED    0x100
#define PORT_TYPE_VIDEO     0x01
#define PORT_TYPE_AUDIO     0x02
#define PORT_TYPE_MPTS      0x04
#define PORT_TYPE_MPPS      0x08
#define PORT_TYPE_ES        0x10
#define PORT_TYPE_RM        0x20
#define PORT_TYPE_SUB       0x40
#define PORT_TYPE_SUB_RD    0x80
#define PORT_TYPE_HEVC      0x100
#define PORT_TYPE_USERDATA	0x200

#define _A_M  'S'
#define AMSTREAM_IOC_VB_START   _IOW((_A_M), 0x00, int)
#define AMSTREAM_IOC_VB_SIZE    _IOW((_A_M), 0x01, int)
#define AMSTREAM_IOC_AB_START   _IOW((_A_M), 0x02, int)
#define AMSTREAM_IOC_AB_SIZE    _IOW((_A_M), 0x03, int)
#define AMSTREAM_IOC_VFORMAT    _IOW((_A_M), 0x04, int)
#define AMSTREAM_IOC_AFORMAT    _IOW((_A_M), 0x05, int)
#define AMSTREAM_IOC_VID        _IOW((_A_M), 0x06, int)
#define AMSTREAM_IOC_AID        _IOW((_A_M), 0x07, int)
#define AMSTREAM_IOC_VB_STATUS  _IOR((_A_M), 0x08, int)
#define AMSTREAM_IOC_AB_STATUS  _IOR((_A_M), 0x09, int)
#define AMSTREAM_IOC_SYSINFO    _IOW((_A_M), 0x0a, int)
#define AMSTREAM_IOC_ACHANNEL   _IOW((_A_M), 0x0b, int)
#define AMSTREAM_IOC_SAMPLERATE _IOW((_A_M), 0x0c, int)
#define AMSTREAM_IOC_DATAWIDTH  _IOW((_A_M), 0x0d, int)
#define AMSTREAM_IOC_TSTAMP     _IOW((_A_M), 0x0e, int)
#define AMSTREAM_IOC_VDECSTAT   _IOR((_A_M), 0x0f, int)
#define AMSTREAM_IOC_ADECSTAT   _IOR((_A_M), 0x10, int)

#define AMSTREAM_IOC_PORT_INIT   _IO((_A_M), 0x11)
#define AMSTREAM_IOC_TRICKMODE  _IOW((_A_M), 0x12, int)

#define AMSTREAM_IOC_AUDIO_INFO	_IOW((_A_M), 0x13, int)
#define AMSTREAM_IOC_TRICK_STAT  _IOR((_A_M), 0x14, int)
#define AMSTREAM_IOC_AUDIO_RESET _IO((_A_M), 0x15)
#define AMSTREAM_IOC_SID         _IOW((_A_M), 0x16, int)
#define AMSTREAM_IOC_VPAUSE      _IOW((_A_M), 0x17, int)
#define AMSTREAM_IOC_AVTHRESH   _IOW((_A_M), 0x18, int)
#define AMSTREAM_IOC_SYNCTHRESH _IOW((_A_M), 0x19, int)
#define AMSTREAM_IOC_SUB_RESET   _IOW((_A_M), 0x1a, int)
#define AMAUDIO_IOC_SET_RESAMPLE_ENA _IOW((_A_M), 0x19, unsigned long)
#define AMAUDIO_IOC_GET_RESAMPLE_ENA _IOR((_A_M), 0x1a, unsigned long)
#define AMSTREAM_IOC_SUB_LENGTH  _IOR((_A_M), 0x1b, int)
#define AMSTREAM_IOC_SET_DEC_RESET _IOW((_A_M), 0x1c, int)
#define AMAUDIO_IOC_SET_RESAMPLE_TYPE _IOW((_A_M), 0x1b, unsigned long)
#define AMAUDIO_IOC_GET_RESAMPLE_TYPE _IOR((_A_M), 0x1c, unsigned long)
#define AMSTREAM_IOC_TS_SKIPBYTE _IOW((_A_M), 0x1d, int)
#define AMSTREAM_IOC_SUB_TYPE    _IOW((_A_M), 0x1e, int)
#define AMSTREAM_IOC_CLEAR_VIDEO _IOW((_A_M), 0x1f, int)

#define AMSTREAM_IOC_APTS             _IOR((_A_M), 0x40, int)
#define AMSTREAM_IOC_VPTS             _IOR((_A_M), 0x41, int)
#define AMSTREAM_IOC_PCRSCR           _IOR((_A_M), 0x42, int)
#define AMSTREAM_IOC_SYNCENABLE      _IOW((_A_M), 0x43, int)
#define AMSTREAM_IOC_GET_SYNC_ADISCON  _IOR((_A_M), 0x44, int)
#define AMSTREAM_IOC_SET_SYNC_ADISCON  _IOW((_A_M), 0x45, int)
#define AMSTREAM_IOC_GET_SYNC_VDISCON  _IOR((_A_M), 0x46, int)
#define AMSTREAM_IOC_SET_SYNC_VDISCON  _IOW((_A_M), 0x47, int)
#define AMSTREAM_IOC_GET_VIDEO_DISABLE  _IOR((_A_M), 0x48, int)
#define AMSTREAM_IOC_SET_VIDEO_DISABLE  _IOW((_A_M), 0x49, int)
#define AMSTREAM_IOC_SET_PCRSCR       _IOW((_A_M), 0x4a, int)
#define AMSTREAM_IOC_GET_VIDEO_AXIS   _IOR((_A_M), 0x4b, int)
#define AMSTREAM_IOC_SET_VIDEO_AXIS   _IOW((_A_M), 0x4c, int)
#define AMSTREAM_IOC_GET_VIDEO_CROP   _IOR((_A_M), 0x4d, int)
#define AMSTREAM_IOC_SET_VIDEO_CROP   _IOW((_A_M), 0x4e, int)
#define AMSTREAM_IOC_PCRID        _IOW((_A_M), 0x4f, int)

/* VPP.3D IOCTL command list^M */
#define  AMSTREAM_IOC_SET_3D_TYPE  _IOW((_A_M), 0x3c, unsigned int)
#define  AMSTREAM_IOC_GET_3D_TYPE  _IOW((_A_M), 0x3d, unsigned int)

#define AMSTREAM_IOC_SUB_NUM	_IOR((_A_M), 0x50, int)
#define AMSTREAM_IOC_SUB_INFO	_IOR((_A_M), 0x51, int)
#define AMSTREAM_IOC_GET_BLACKOUT_POLICY   _IOR((_A_M), 0x52, int)
#define AMSTREAM_IOC_SET_BLACKOUT_POLICY   _IOW((_A_M), 0x53, int)
#define AMSTREAM_IOC_UD_LENGTH _IOR((_A_M), 0x54, int)
#define AMSTREAM_IOC_UD_POC _IOR((_A_M), 0x55, int)
#define AMSTREAM_IOC_GET_SCREEN_MODE _IOR((_A_M), 0x58, int)
#define AMSTREAM_IOC_SET_SCREEN_MODE _IOW((_A_M), 0x59, int)
#define AMSTREAM_IOC_GET_VIDEO_DISCONTINUE_REPORT _IOR((_A_M), 0x5a, int)
#define AMSTREAM_IOC_SET_VIDEO_DISCONTINUE_REPORT _IOW((_A_M), 0x5b, int)
#define AMSTREAM_IOC_VF_STATUS  _IOR((_A_M), 0x60, int)
#define AMSTREAM_IOC_CLEAR_VBUF _IO((_A_M), 0x80)

#define AMSTREAM_IOC_APTS_LOOKUP    _IOR((_A_M), 0x81, int)
#define GET_FIRST_APTS_FLAG    _IOR((_A_M), 0x82, int)
#define AMSTREAM_IOC_GET_SYNC_ADISCON_DIFF  _IOR((_A_M), 0x83, int)
#define AMSTREAM_IOC_GET_SYNC_VDISCON_DIFF  _IOR((_A_M), 0x84, int)
#define AMSTREAM_IOC_SET_SYNC_ADISCON_DIFF  _IOW((_A_M), 0x85, int)
#define AMSTREAM_IOC_SET_SYNC_VDISCON_DIFF  _IOW((_A_M), 0x86, int)
#define AMSTREAM_IOC_GET_FREERUN_MODE  _IOR((_A_M), 0x87, int)
#define AMSTREAM_IOC_SET_FREERUN_MODE  _IOW((_A_M), 0x88, int)
#define AMSTREAM_IOC_SET_VSYNC_UPINT   _IOW((_A_M), 0x89, int)
#define AMSTREAM_IOC_GET_VSYNC_SLOW_FACTOR   _IOW((_A_M), 0x8a, int)
#define AMSTREAM_IOC_SET_VSYNC_SLOW_FACTOR   _IOW((_A_M), 0x8b, int)
#define AMSTREAM_IOC_SET_DEMUX  _IOW((_A_M), 0x90, int)
#define AMSTREAM_IOC_SET_DRMMODE _IOW((_A_M), 0x91, int)
#define AMSTREAM_IOC_TSTAMP_uS64 _IOW((_A_M), 0x95, int)

#define AMSTREAM_IOC_SET_VIDEO_DELAY_LIMIT_MS _IOW((_A_M), 0xa0, int)
#define AMSTREAM_IOC_GET_VIDEO_DELAY_LIMIT_MS _IOR((_A_M), 0xa1, int)
#define AMSTREAM_IOC_SET_AUDIO_DELAY_LIMIT_MS _IOW((_A_M), 0xa2, int)
#define AMSTREAM_IOC_GET_AUDIO_DELAY_LIMIT_MS _IOR((_A_M), 0xa3, int)
#define AMSTREAM_IOC_GET_AUDIO_CUR_DELAY_MS _IOR((_A_M), 0xa4, int)
#define AMSTREAM_IOC_GET_VIDEO_CUR_DELAY_MS _IOR((_A_M), 0xa5, int)
#define AMSTREAM_IOC_GET_AUDIO_AVG_BITRATE_BPS _IOR((_A_M), 0xa6, int)
#define AMSTREAM_IOC_GET_VIDEO_AVG_BITRATE_BPS _IOR((_A_M), 0xa7, int)
#define AMSTREAM_IOC_SET_APTS  _IOW((_A_M), 0xa8, int)
#define AMSTREAM_IOC_GET_LAST_CHECKIN_APTS _IOR((_A_M), 0xa9, int)
#define AMSTREAM_IOC_GET_LAST_CHECKIN_VPTS _IOR((_A_M), 0xaa, int)
#define AMSTREAM_IOC_GET_LAST_CHECKOUT_APTS _IOR((_A_M), 0xab, int)
#define AMSTREAM_IOC_GET_LAST_CHECKOUT_VPTS _IOR((_A_M), 0xac, int)
/* subtitle.c get/set subtitle info */
#define AMSTREAM_IOC_GET_SUBTITLE_INFO _IOR((_A_M), 0xad, int)
#define AMSTREAM_IOC_SET_SUBTITLE_INFO _IOW((_A_M), 0xae, int)
#define AMSTREAM_IOC_SET_OMX_VPTS _IOW((_A_M), 0xaf, int)
#define AMSTREAM_IOC_GET_OMX_VPTS _IOW((_A_M), 0xb0, int)
#define AMSTREAM_IOC_SET_PLAYRATE _IOW((_A_M), 0xb0, unsigned long)

#define AMSTREAM_IOC_GET_SCR_STATE _IOR((_A_M), 0x92, unsigned long)


#define AMSTREAM_IOC_GET_TRICK_VPTS _IOR((_A_M), 0xf0, int)
#define AMSTREAM_IOC_DISABLE_SLOW_SYNC _IOW((_A_M), 0xf1, int)

#define AMSTREAM_IOC_GET_VERSION _IOR((_A_M), 0xc0, int)
#define AMSTREAM_IOC_GET _IOWR((_A_M), 0xc1, struct am_ioctl_parm)
#define AMSTREAM_IOC_SET _IOW((_A_M), 0xc2, struct am_ioctl_parm)
#define AMSTREAM_IOC_GET_EX _IOWR((_A_M), 0xc3, struct am_ioctl_parm_ex)
#define AMSTREAM_IOC_SET_EX _IOW((_A_M), 0xc4, struct am_ioctl_parm_ex)
#define AMSTREAM_IOC_GET_PTR _IOWR((_A_M), 0xc5, struct am_ioctl_parm_ptr)
#define AMSTREAM_IOC_SET_PTR _IOW((_A_M), 0xc6, struct am_ioctl_parm_ptr)

struct buf_status {
    int size;
    int data_len;
    int free_len;
    unsigned int read_pointer;
    unsigned int write_pointer;
};


struct vdec_status {
    unsigned int width;
    unsigned int height;
    unsigned int fps;
    unsigned int error_count;
    unsigned int status;
};

struct adec_status {
    unsigned int channels;
    unsigned int sample_rate;
    unsigned int resolution;
    unsigned int error_count;
    unsigned int status;
};

struct am_io_param {
    union {
        int data;
        int id;//get bufstatus? //or others
    };

    int len; //buffer size;

    union {
        char buf[1];
        struct buf_status status;
        struct vdec_status vstatus;
        struct adec_status astatus;
    };
};
void set_vdec_func(int (*vdec_func)(struct vdec_status *));
void set_adec_func(int (*adec_func)(struct adec_status *));

#endif /* AMSTREAM_H */
