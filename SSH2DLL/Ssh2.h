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
#include "Channel.h"
#include <iostream>

using namespace std;

class _declspec(dllexport) Ssh2
{
public:
	Ssh2(const string &srvIp, int srvPort=22 );  
	~Ssh2(void);
	bool Connect( const string &userName, const string &userPwd);  
	bool Disconnect(void);  
	Channel* CreateChannel(const string &ptyType = "vanilla");  
	static void S_KbdCallback(const char *name, int name_len, const char *instruction, int instruction_len,  
		int num_prompts, const LIBSSH2_USERAUTH_KBDINT_PROMPT *prompts,  
		LIBSSH2_USERAUTH_KBDINT_RESPONSE *responses, void **abstract);
public:  
	static string s_password;  
	string m_srvIp;  
	int    m_srvPort;  
	string m_userName;  
	string m_password;  
	int    m_sock;  
	LIBSSH2_SESSION *m_session;  
};
