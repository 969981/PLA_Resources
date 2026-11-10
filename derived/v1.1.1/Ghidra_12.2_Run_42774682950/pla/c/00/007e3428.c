/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e3428; name: FUN_007e3428
 */


void FUN_007e3428(long *param_1,long param_2)

{
  *param_1 = (long)(PTR_DAT_04377418 + 0x10);
  memcpy(param_1 + 1,(void *)(param_2 + 8),0x10);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0x18);
  return;
}


