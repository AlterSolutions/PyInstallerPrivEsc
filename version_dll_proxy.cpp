
HINSTANCE hDll = LoadLibraryA("payload.dll");

#pragma comment(linker, "/export:GetFileVersionInfoA=version2.GetFileVersionInfoA,@1")
#pragma comment(linker, "/export:GetFileVersionInfoByHandle=version2.GetFileVersionInfoByHandle,@2")
#pragma comment(linker, "/export:GetFileVersionInfoExA=version2.GetFileVersionInfoExA,@3")
#pragma comment(linker, "/export:GetFileVersionInfoExW=version2.GetFileVersionInfoExW,@4")
#pragma comment(linker, "/export:GetFileVersionInfoSizeA=version2.GetFileVersionInfoSizeA,@5")
#pragma comment(linker, "/export:GetFileVersionInfoSizeExA=version2.GetFileVersionInfoSizeExA,@6")
#pragma comment(linker, "/export:GetFileVersionInfoSizeExW=version2.GetFileVersionInfoSizeExW,@7")
#pragma comment(linker, "/export:GetFileVersionInfoSizeW=version2.GetFileVersionInfoSizeW,@8")
#pragma comment(linker, "/export:GetFileVersionInfoW=version2.GetFileVersionInfoW,@9")
#pragma comment(linker, "/export:VerFindFileA=version2.VerFindFileA,@10")
#pragma comment(linker, "/export:VerFindFileW=version2.VerFindFileW,@11")
#pragma comment(linker, "/export:VerInstallFileA=version2.VerInstallFileA,@12")
#pragma comment(linker, "/export:VerInstallFileW=version2.VerInstallFileW,@13")
#pragma comment(linker, "/export:VerLanguageNameA=version2.VerLanguageNameA,@14")
#pragma comment(linker, "/export:VerLanguageNameW=version2.VerLanguageNameW,@15")
#pragma comment(linker, "/export:VerQueryValueA=version2.VerQueryValueA,@16")
#pragma comment(linker, "/export:VerQueryValueW=version2.VerQueryValueW,@17")

