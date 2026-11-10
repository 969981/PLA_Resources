/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00840228; name: FUN_00840228
 */


void FUN_00840228(long param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  memset((void *)(param_1 + 0x5f0),0,4);
  return;
}


