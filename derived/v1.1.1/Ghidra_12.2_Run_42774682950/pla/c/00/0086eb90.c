/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086eb90; name: FUN_0086eb90
 */


undefined8 FUN_0086eb90(long param_1)

{
  ulong uVar1;
  
  do {
    if (*(int *)(param_1 + 0x40) == 0) {
      return 1;
    }
    uVar1 = FUN_0086ebc4(param_1);
  } while ((uVar1 & 1) != 0);
  return 0;
}


