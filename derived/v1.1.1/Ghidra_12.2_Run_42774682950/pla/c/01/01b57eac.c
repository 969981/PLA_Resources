/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b57eac; name: FUN_01b57eac
 */


void FUN_01b57eac(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x4ac) = param_2;
  if (*(long *)(param_1 + 0x4c8) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x4c8) + 0x41c) = param_2;
  }
  return;
}


