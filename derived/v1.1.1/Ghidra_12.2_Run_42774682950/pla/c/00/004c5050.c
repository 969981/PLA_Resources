/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5050; name: FUN_004c5050
 */


undefined8 FUN_004c5050(long param_1,void *param_2,size_t param_3)

{
  if (param_3 < 0x101) {
    memcpy((void *)(param_1 + 0x50),param_2,param_3);
    *(size_t *)(param_1 + 8) = param_3;
    return 1;
  }
  return 0;
}


