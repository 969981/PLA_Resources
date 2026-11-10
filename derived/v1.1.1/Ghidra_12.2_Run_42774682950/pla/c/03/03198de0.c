/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03198de0; name: FUN_03198de0
 */


undefined8 FUN_03198de0(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = (ulong)(param_3 - param_2) >> 4;
  if (2 < (int)uVar3) {
    lVar5 = 2 - (uVar3 & 0xffffffff);
    lVar4 = param_2 + 0x20;
    do {
      iVar2 = FUN_0334bb10(param_1,param_2,lVar4 + -0x10,lVar4);
      if (iVar2 != 0) {
        return 1;
      }
      bVar1 = lVar5 != -1;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (bVar1);
  }
  return 0;
}


