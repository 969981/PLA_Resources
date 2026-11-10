/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f40810; name: FUN_02f40810
 */


undefined8 FUN_02f40810(long param_1)

{
  int *piVar1;
  
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  piVar1 = (int *)(param_1 + 0x20);
  *piVar1 = -1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02f40970((long *)(param_1 + 0x18),piVar1);
    if ((*piVar1 == -1) || (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_1 + 0x18))) {
      return 0;
    }
    FUN_02f40a30(param_1);
  }
  return 1;
}


