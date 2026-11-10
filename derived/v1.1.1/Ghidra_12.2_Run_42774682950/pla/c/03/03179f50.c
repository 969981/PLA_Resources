/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03179f50; name: FUN_03179f50
 */


void FUN_03179f50(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int local_38 [2];
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x40);
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    lVar4 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x38) + lVar4);
      if (lVar2 != 0) {
        FUN_0318b470(lVar2);
        iVar1 = *(int *)(*(long *)(lVar2 + 0x20) + 0x17c);
        if (iVar1 != -1) {
          local_38[0] = iVar1;
          FUN_03179e28(param_1,local_38);
        }
      }
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + 0xf0;
    } while (uVar3 != 0);
  }
  return;
}


