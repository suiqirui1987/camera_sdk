#ifndef _ERROR_H_
#define _ERROR_H_

#define ERROR_SUCCESS		0

//system error
#define ERROR_SOCKET_CREATE                 1000
#define ERROR_SOCKET_SETREUSE               1001
#define ERROR_SOCKET_CLOSED                 1002
#define ERROR_SOCKET_READ                   1003
#define ERROR_SOCKET_TIMEOUT                1004
#define ERROR_SOCKET_CONNECT                1005
#define ERROR_SYSTEM_PACKET_INVALID         1006
#define ERROR_SYSTEM_PLAYER_CLOSE			1007

//rtmp error
#define ERROR_RTMP_HANDSHAKE				2000			
#define ERROR_RTMP_CONNECT_STREAM			2001

//h264 decode
#define ERROR_H264_FIND_DECODER				2050
#define ERROR_H264_OPEN_DECODER				2051
#define ERROR_H264_ALLOC_CODEC_CONTEXT		2052
#define ERROE_H264_CODEC_CONTEXT_NULL		2053

//stream error
#define ERROR_STREAM_ERROR					3000
#define ERROR_STREAM_SYNC					3001
#define ERROR_STREAM_TYPE_UNKNOW			3002

#endif
