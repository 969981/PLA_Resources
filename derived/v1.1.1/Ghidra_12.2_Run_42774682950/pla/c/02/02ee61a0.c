/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee61a0; name: FUN_02ee61a0
 */


long FUN_02ee61a0(long *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == 0) {
    lVar3 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + (uVar5 >> 1);
      uVar2 = *(uint *)(*param_1 + (long)iVar1 * 0x28 + 0x20);
      if (uVar2 == param_2) {
        *param_3 = 1;
        return *param_1 + (long)iVar1 * 0x28;
      }
      if (uVar2 < param_2) {
        iVar4 = iVar1 + 1;
      }
      uVar5 = uVar5 - (uVar2 < param_2) >> 1;
    } while (uVar5 != 0);
    lVar3 = (long)iVar4;
  }
  *param_3 = 0;
  if (*param_1 + lVar3 * 0x28 == 0) {
    lVar3 = FUN_02ee637c();
  }
  else {
    lVar3 = FUN_02ee624c();
  }
  if (lVar3 != 0) {
    *(uint *)(lVar3 + 0x20) = param_2;
  }
  return lVar3;
}


