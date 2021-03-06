#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_ARPHRD_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_ARPHRD_H_
#include "libc/runtime/symbolic.h"

#define ARPHRD_ETHER SYMBOLIC(ARPHRD_ETHER)
#define ARPHRD_FCFABRIC SYMBOLIC(ARPHRD_FCFABRIC)
#define ARPHRD_IEEE80211 SYMBOLIC(ARPHRD_IEEE80211)
#define ARPHRD_IEEE80211_PRISM SYMBOLIC(ARPHRD_IEEE80211_PRISM)
#define ARPHRD_IEEE80211_RADIOTAP SYMBOLIC(ARPHRD_IEEE80211_RADIOTAP)
#define ARPHRD_IEEE802154 SYMBOLIC(ARPHRD_IEEE802154)
#define ARPHRD_IEEE802_TR SYMBOLIC(ARPHRD_IEEE802_TR)
#define ARPHRD_LOCALTLK SYMBOLIC(ARPHRD_LOCALTLK)

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const long ARPHRD_ETHER;
extern const long ARPHRD_FCFABRIC;
extern const long ARPHRD_IEEE80211;
extern const long ARPHRD_IEEE80211_PRISM;
extern const long ARPHRD_IEEE80211_RADIOTAP;
extern const long ARPHRD_IEEE802154;
extern const long ARPHRD_IEEE802_TR;
extern const long ARPHRD_LOCALTLK;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_ARPHRD_H_ */
