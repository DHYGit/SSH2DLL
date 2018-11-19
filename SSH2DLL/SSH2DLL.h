// SSH2DLL.h
#pragma once

#include "Channel.h"
#include "Ssh2.h"
#include <iostream>
	
using namespace std;

using namespace System;

namespace SSH2DLL {
	public ref class SSH2Class
	{
		// TODO: 在此处添加此类的方法。
		private:
			Ssh2 *ssh;
			Channel *channel;
		public:  
			SSH2Class();
			bool Connect(char *ip, char *user, char *password);
			bool Disconnect(); 
			bool CreateChannel(); 
			bool Write(char* data);
			char* Read(); 
	};
}
