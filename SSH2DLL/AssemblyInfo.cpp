#include "stdafx.h"

using namespace System;
using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;
using namespace System::Runtime::InteropServices;
using namespace System::Security::Permissions;

//
// �йس��򼯵ĳ�����Ϣͨ���������Լ�
// ���ơ�������Щ����ֵ���޸�
// ����򼯹�������Ϣ��
//
[assembly:AssemblyTitleAttribute("SSH2DLL")];
[assembly:AssemblyDescriptionAttribute("")];
[assembly:AssemblyConfigurationAttribute("")];
[assembly:AssemblyCompanyAttribute("΢���й�")];
[assembly:AssemblyProductAttribute("SSH2DLL")];
[assembly:AssemblyCopyrightAttribute("Copyright (c) ΢���й� 2018")];
[assembly:AssemblyTrademarkAttribute("")];
[assembly:AssemblyCultureAttribute("")];

//
// ���򼯵İ汾��Ϣ�������ĸ�ֵ���:
//
//      ���汾
//      �ΰ汾
//      ���ɺ�
//      �޶���
//
// ������ָ������ֵ��Ҳ����ʹ�á��޶��š��͡����ɺš���Ĭ��ֵ��
// �����ǰ�������ʾʹ�á�*��:

[assembly:AssemblyVersionAttribute("1.0.*")];

[assembly:ComVisible(false)];

[assembly:CLSCompliantAttribute(true)];

[assembly:SecurityPermission(SecurityAction::RequestMinimum, UnmanagedCode = true)];
