/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01123fa4; name: FUN_01123fa4
 */


void FUN_01123fa4(long param_1,void *param_2,size_t param_3)

{
  if (param_3 < 0x1e) {
    memcpy((void *)(param_1 + 0xbd),param_2,param_3);
    *(undefined1 *)(param_1 + 0xda) = 1;
  }
  return;
}


