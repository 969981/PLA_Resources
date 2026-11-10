/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f390c; name: FUN_031f390c
 */


void FUN_031f390c(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint local_38 [2];
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x5c) != '\x04')) {
    lVar5 = (long)*(int *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x50);
    if (*(int *)(param_1 + 0x58) < iVar3) {
      uVar4 = 0xffffffff;
      do {
        uVar1 = *(uint *)(*(long *)(param_1 + 0x48) + lVar5 * 4) >> 0x16;
        if (uVar1 != uVar4) {
          local_38[0] = uVar1;
          uVar2 = FUN_031f39b8(param_2,local_38);
          if ((uVar2 & 1) != 0) {
            FUN_031f3a28(param_1,param_3);
            return;
          }
          iVar3 = *(int *)(param_1 + 0x50);
          uVar4 = uVar1;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar3);
    }
  }
  return;
}


