/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00809290; name: FUN_00809290
 */


void FUN_00809290(long param_1,long param_2)

{
  FUN_007f2a9c();
  memcpy((void *)(param_1 + 0x558),(void *)(param_2 + 0x558),0x40);
  *(undefined1 *)(param_1 + 0x598) = *(undefined1 *)(param_2 + 0x598);
  return;
}


