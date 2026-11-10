/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a8be8; name: FUN_009a8be8
 */


void FUN_009a8be8(undefined4 param_1,long param_2,int param_3,int param_4,byte param_5)

{
  long lVar1;
  
  if (param_4 == 1) {
    lVar1 = param_2 + (long)param_3 * 0x10;
    *(undefined4 *)(lVar1 + 0x778) = 1;
    *(byte *)(lVar1 + 0x77c) = param_5 & 1;
    *(undefined4 *)(lVar1 + 0x780) = param_1;
  }
  else if (param_4 == 2) {
    lVar1 = param_2 + (long)param_3 * 0x10;
    if (*(int *)(lVar1 + 0x778) != 1) {
      return;
    }
    *(undefined4 *)(lVar1 + 0x778) = 2;
    lVar1 = param_2 + (long)param_3 * 0x10;
    *(undefined1 *)(lVar1 + 0x77c) = 0;
    *(undefined4 *)(lVar1 + 0x780) = *(undefined4 *)(lVar1 + 0x784);
  }
  *(ulong *)(param_2 + 0x770) = *(ulong *)(param_2 + 0x770) | 1L << ((long)param_3 & 0x3fU);
  return;
}


