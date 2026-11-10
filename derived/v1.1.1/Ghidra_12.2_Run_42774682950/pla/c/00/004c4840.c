/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c4840; name: FUN_004c4840
 */


undefined4 FUN_004c4840(long param_1)

{
  undefined4 *__src;
  undefined4 local_4;
  
  __src = (undefined4 *)(param_1 + 0x158);
  if (*(size_t *)(param_1 + 0x150) < 4) {
    local_4 = 0;
    memcpy(&local_4,__src,*(size_t *)(param_1 + 0x150));
    __src = &local_4;
  }
  return *__src;
}


