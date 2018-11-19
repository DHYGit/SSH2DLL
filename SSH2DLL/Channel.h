#pragma once

#ifdef WIN32  

#include <winsock2.h>  
#else  
#include <sys/socket.h>  
#include <netinet/in.h>  
#include <unistd.h>  
#include <arpa/inet.h>  

#endif  

#include <libssh2.h>  
#include <libssh2_sftp.h>  

#include <iostream>

using namespace std;
 
const int CHANNEL_READ_TIMEOUT = 3000; 

class _declspec(dllexport) Channel{
	public:  
	Channel(LIBSSH2_CHANNEL *channel);  
	~Channel(void);  

	string Read( const string &strend = "$", int timeout = CHANNEL_READ_TIMEOUT );  
	bool   Write(const string &data);  

	Channel(const Channel&);  
	Channel operator=(const Channel&);  
	LIBSSH2_CHANNEL *m_channel;
};
