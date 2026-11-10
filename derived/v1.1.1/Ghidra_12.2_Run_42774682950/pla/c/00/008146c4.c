/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008146c4; name: FUN_008146c4
 */


void FUN_008146c4(long param_1,void *param_2,uint param_3)

{
  if ((param_2 != (void *)0x0) && (param_3 < 0x21)) {
    memcpy((void *)(param_1 + 0x1259),param_2,(ulong)param_3);
    *(undefined1 *)(param_1 + 0x1279) = 1;
  }
  return;
}


