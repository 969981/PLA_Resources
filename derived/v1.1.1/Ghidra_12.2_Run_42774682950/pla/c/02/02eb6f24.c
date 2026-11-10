/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb6f24; name: FUN_02eb6f24
 */


void FUN_02eb6f24(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (uVar2 = (ulong)*(uint *)(param_1 + 0x20), *(uint *)(param_1 + 0x20) != 0)) {
    lVar3 = *(long *)(param_1 + 0x18);
    lVar1 = *(long *)(lVar3 + 0x10);
    lVar4 = lVar3;
    while( true ) {
      if (lVar1 != 0) {
        FUN_02ed2818(lVar1,param_1);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        lVar3 = *(long *)(param_1 + 0x18);
        uVar2 = (ulong)*(uint *)(param_1 + 0x20);
      }
      if (lVar4 + 0x38 == lVar3 + uVar2 * 0x38) break;
      lVar1 = *(long *)(lVar4 + 0x48);
      lVar4 = lVar4 + 0x38;
    }
  }
  *(long *)(param_1 + 0x30) = param_2;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    lVar4 = *(long *)(param_1 + 0x18);
    do {
      FUN_02eb6fe0(lVar4 + 8,param_1);
      lVar4 = lVar4 + 0x38;
    } while (lVar4 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x38);
  }
  return;
}


