/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03265740; name: FUN_03265740
 */


void FUN_03265740(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x98) != 1) {
    do {
      uVar1 = FUN_032675c0(param_1,*(long *)(param_1 + 0x90) + 0x10);
      if ((uVar1 & 1) != 0) {
        return;
      }
      FUN_03260cb4(param_1 + 0x90);
    } while (*(int *)(param_1 + 0x98) != 1);
  }
  return;
}


