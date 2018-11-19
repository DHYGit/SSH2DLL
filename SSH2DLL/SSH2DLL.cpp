// 这是主 DLL 文件。

#include "stdafx.h"

#include "SSH2DLL.h"

using namespace SSH2DLL;

SSH2Class::SSH2Class(){
}

bool SSH2Class::Connect(char* ip, char *user, char *password){
	this->ssh = new Ssh2(ip);
	return this->ssh->Connect(user, password);
}

bool SSH2Class::Disconnect(){
	return this->ssh->Disconnect();
}

bool SSH2Class::CreateChannel(){
	channel	= this->ssh->CreateChannel();
	if(channel == NULL){
		return false;
	}else{
		return true;
	}
}

bool SSH2Class::Write(char *data){
	return this->channel->Write(data);
}

char* SSH2Class::Read(){
	string str = this->channel->Read();
	char c[10240];
	strcpy(c, str.c_str());
	return c;
} 