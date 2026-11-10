/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00935eac; name: FUN_00935eac
 */


void FUN_00935eac(long param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x80);
    if (uVar1 < 4) {
      *(uint *)(param_1 + 0x80) = uVar1 + 1;
      *(int *)(param_1 + (ulong)uVar1 * 4 + 0x70) = param_2;
    }
  }
  return;
}


