/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024f270; name: FUN_0024f270
 */


undefined4 FUN_0024f270(long param_1,int param_2)

{
  if (param_2 == 1) {
    return *(undefined4 *)(*(long *)(param_1 + 0x150) + 4);
  }
  if (param_2 == 0) {
    return **(undefined4 **)(param_1 + 0x150);
  }
  return 0;
}


