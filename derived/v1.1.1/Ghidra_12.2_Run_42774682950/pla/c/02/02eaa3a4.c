/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaa3a4; name: FUN_02eaa3a4
 */


void FUN_02eaa3a4(long param_1,int param_2,long param_3)

{
  int iVar1;
  
  if ((param_3 == 0) || (*(long *)(param_1 + 0x50) == param_3)) {
    if (param_2 == 2) {
      FUN_02eaa2fc();
      return;
    }
    if (param_2 == 1) {
      if ((*(int *)(param_1 + 0x48) != 0) &&
         (iVar1 = *(int *)(param_1 + 0xa8), *(int *)(param_1 + 0xa8) = iVar1 + 1, iVar1 == 0)) {
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(DAT_0440a128 + 0x78);
        return;
      }
    }
    else if (param_2 == 0) {
      FUN_02ea9fd0();
      return;
    }
  }
  return;
}


