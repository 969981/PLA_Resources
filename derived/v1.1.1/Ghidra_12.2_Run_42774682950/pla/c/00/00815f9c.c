/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00815f9c; name: FUN_00815f9c
 */


void FUN_00815f9c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_007e5f0c();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    do {
      FUN_007ec500(param_1,2);
      uVar1 = FUN_007e5f0c(param_1);
    } while ((uVar1 & 1) != 0);
  }
  if (*(int *)(param_1 + 0xb28) == 1) {
    FUN_007e5d18(param_1 + 0xb28);
    return;
  }
  return;
}


