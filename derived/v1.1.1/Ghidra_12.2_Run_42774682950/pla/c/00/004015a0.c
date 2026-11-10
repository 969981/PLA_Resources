/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004015a0; name: FUN_004015a0
 */


long FUN_004015a0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  iVar2 = FUN_004060f0(0x40000,0);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_004001b0(&DAT_0439de40,FUN_00402140);
  lVar4 = 0;
  if ((iVar2 != 0) && (DAT_0439de44 != 0)) {
    lVar4 = FUN_00405540(&DAT_0439de48);
    if (lVar4 == -1) {
      return 0;
    }
    if (lVar4 == 0) {
      iVar2 = FUN_00405560(&DAT_0439de48,0xffffffffffffffff);
      if (iVar2 == 0) {
        return 0;
      }
      lVar4 = FUN_004002a0(0x248,"external/openssl/crypto/err/err.c",0x2dc);
      if (lVar4 == 0) {
        FUN_00405560(&DAT_0439de48,0);
        return 0;
      }
      iVar2 = FUN_00405f70(2);
      if ((iVar2 == 0) || (iVar2 = FUN_00405560(&DAT_0439de48,lVar4), iVar2 == 0)) {
        FUN_00401e20(lVar4);
        FUN_00405560(&DAT_0439de48,0);
        return 0;
      }
      FUN_004060f0(2,0);
    }
    piVar3 = __errno_location();
    *piVar3 = iVar1;
  }
  return lVar4;
}


