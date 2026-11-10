/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e3dd0; name: FUN_031e3dd0
 */


void FUN_031e3dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  lVar2 = FUN_031e5194((long *)(param_1 + 8));
  if ((lVar2 != 0) &&
     (uVar4 = *(uint *)(lVar2 + 4) |
              ((int)lVar2 - (int)*(undefined8 *)(param_1 + 0x18)) * 0x20000000, -1 < (int)uVar4)) {
    lVar2 = *(long *)(param_1 + 8);
    lVar5 = lVar2 + (long)(int)uVar4 * 0x68;
    FUN_031e2f1c(lVar5 + 0x28,param_3);
    iVar1 = *(int *)(lVar5 + 0x50);
    uVar3 = iVar1 - 1;
    if (0 < iVar1) {
      do {
        FUN_031e2f1c(*(long *)(*(long *)(lVar2 + (long)(int)uVar4 * 0x68 + 0x48) +
                               ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8) + 0x40,param_3);
        uVar3 = uVar3 - 1;
      } while (-1 < (int)uVar3);
    }
  }
  return;
}


