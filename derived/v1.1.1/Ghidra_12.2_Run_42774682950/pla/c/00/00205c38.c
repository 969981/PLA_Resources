/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205c38; name: FUN_00205c38
 */


void FUN_00205c38(long param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) < 1) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 4) < 0x101) {
      return;
    }
    uVar1 = 0x100;
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


