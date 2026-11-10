/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329ca70; name: FUN_0329ca70
 */


void FUN_0329ca70(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0329ca14();
  if ((uVar1 & 1) == 0) {
    if (1 < *(int *)(param_1 + 0x100)) {
      FUN_0329cbb0(param_1,0,*(int *)(param_1 + 0x100) + -1);
      return;
    }
  }
  return;
}


