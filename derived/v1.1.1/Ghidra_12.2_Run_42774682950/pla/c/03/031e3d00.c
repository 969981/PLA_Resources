/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e3d00; name: FUN_031e3d00
 */


void FUN_031e3d00(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      lVar5 = *(long *)(param_1 + 8);
      piVar6 = (int *)(lVar5 + (long)iVar4 * 0x68);
      iVar1 = *piVar6;
      FUN_031e2f1c(piVar6 + 10,param_2);
      uVar2 = piVar6[0x14] - 1;
      if (0 < piVar6[0x14]) {
        do {
          lVar3 = *(long *)(*(long *)(lVar5 + (long)iVar4 * 0x68 + 0x48) +
                            ((long)((ulong)uVar2 << 0x20) >> 0x1c) + 8);
          if (*(int *)(lVar3 + 0x18) == iVar1) {
            FUN_031e2f1c(lVar3 + 0x40,param_2);
          }
          uVar2 = uVar2 - 1;
        } while (-1 < (int)uVar2);
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}


