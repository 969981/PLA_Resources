/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ccb00; name: FUN_004ccb00
 */


ulong FUN_004ccb00(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((int)param_2 < 1) {
    uVar3 = (ulong)param_2;
    iVar1 = FUN_004cdf50(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_004c9a20(param_1), iVar1 == 0)) {
      iVar1 = FUN_004c9920(param_1);
      if (iVar1 == 0) {
        uVar2 = FUN_004c3370(param_1);
        FUN_00404060(uVar2,1);
        return uVar3;
      }
      uVar3 = FUN_004cdcc0(param_1);
      return uVar3;
    }
  }
  else {
    FUN_004c99a0(param_1,0x50,0x153,0x44,"external/openssl/ssl/statem/statem_dtls.c",0x3cc);
    uVar3 = 0;
  }
  return uVar3;
}


