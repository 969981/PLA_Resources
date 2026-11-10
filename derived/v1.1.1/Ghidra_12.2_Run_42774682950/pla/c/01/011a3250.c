/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a3250; name: FUN_011a3250
 */


uint FUN_011a3250(undefined8 param_1,long param_2,uint param_3,short param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  iVar1 = FUN_02c5df78(param_2,param_3);
  if ((((int)param_3 < 6) &&
      (uVar2 = FUN_02c8b05c(*(undefined8 *)(param_2 + 0x98)),
      (uVar2 & 1 << (ulong)(param_3 & 0x1f) & 0xff) != 0)) ||
     (uVar2 = FUN_02c5db4c(param_2,param_3), 0x1e < uVar2)) {
    uVar2 = 3;
  }
  else if (uVar2 < 0x1a) {
    uVar2 = (uint)(0x13 < uVar2);
  }
  else {
    uVar2 = 2;
  }
  uVar2 = iVar1 + uVar2;
  uVar3 = uVar2;
  if (9 < uVar2) {
    uVar3 = 10;
  }
  if (uVar3 < 3) {
    lVar4 = 0;
  }
  else if (uVar3 < 6) {
    lVar4 = 1;
  }
  else if (uVar3 < 9) {
    lVar4 = 2;
  }
  else {
    if (uVar3 != 9) {
      return uVar3;
    }
    lVar4 = 3;
  }
  if ((&DAT_03888b60)[lVar4 * 4] == param_4) {
    FUN_02c5e1b0(param_2,param_3,1);
    uVar2 = 0xff;
  }
  return uVar2;
}


