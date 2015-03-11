#ifndef CSGO_MM_Link_h__
#define CSGO_MM_Link_h__



#define CSGO_MM_LINK_VERSION_MAJOR    "0"
#define CSGO_MM_LINK_VERSION_MINOR    "9"
#define CSGO_MM_LINK_VERSION_REVISION "0"

#define CSGO_MM_LINK_VERSION CSGO_MM_LINK_VERSION_MAJOR "." CSGO_MM_LINK_VERSION_MINOR "." CSGO_MM_LINK_VERSION_REVISION



#define CSGO_MM_LINK_STEAM_GC_CONNECT_MAX 15000

#define CSGO_MM_LINK_STEAM_CMSG_TIMEOUT 25000

#define CSGO_MM_LINK_STEAM_CALLBACK_INTERVAL 50

#ifdef _WIN32
#define CSGO_MM_LINK_BINARYNAME "CSGO_MM_Link.exe"
#else
#define CSGO_MM_LINK_BINARYNAME "CSGO_MM_Link"
#endif



#endif // CSGO_MM_Link_h__
