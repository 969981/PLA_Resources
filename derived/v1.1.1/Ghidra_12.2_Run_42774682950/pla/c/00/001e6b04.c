/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e6b04; name: FUN_001e6b04
 */


void FUN_001e6b04(long param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (*(int *)(param_1 + 0x60) != iVar1) {
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 == 0x11) {
      *(int *)(*(long *)(param_1 + 0xd8) + 0x1c) = *(int *)(*(long *)(param_1 + 0xd8) + 0x1c) + -1;
    }
    if ((0x20204U >> (param_2 & 0x3f) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x001e6b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(&DAT_0411ccb0 + (param_2 & 0xffffffff) * 8))();
      return;
    }
  }
  return;
}


