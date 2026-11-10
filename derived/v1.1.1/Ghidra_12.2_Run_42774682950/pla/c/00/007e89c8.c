/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e89c8; name: FUN_007e89c8
 */


void FUN_007e89c8(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_3 & 1) != 0) {
    FUN_007e8e38(*(undefined8 *)(param_1 + 0x88));
    return;
  }
  lVar1 = (long)*(int *)(param_1 + 0x14);
  if (*(long *)(param_1 + 8) != param_1) {
    lVar2 = *(long *)(param_1 + 8) - lVar1;
    do {
      if (*(ulong *)(lVar2 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
        FUN_007e8fa0(param_1,lVar2 + lVar1,lVar1 + param_2);
        return;
      }
      lVar2 = *(long *)(lVar2 + lVar1 + 8) - lVar1;
    } while (lVar2 != param_1 - lVar1);
  }
  FUN_007e8fa0(param_1,param_1,lVar1 + param_2);
  return;
}


