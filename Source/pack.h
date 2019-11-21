//HEADER_GOES_HERE
#ifndef __PACK_H__
#define __PACK_H__

void PackPlayer(PkPlayerStruct *pPack, int pnum, BOOL manashield, BOOL savefile);
void VerifyGoldSeeds(PlayerStruct *pPlayer);
void UnPackPlayer(PkPlayerStruct *pPack, int pnum, BOOL killok, BOOL savefile);

/* rdata */

#endif /* __PACK_H__ */
