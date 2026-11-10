/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01123fd8; name: FUN_01123fd8
 */


undefined8 FUN_01123fd8(long param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_3 < 0x1e) && (*(char *)(param_1 + 0xda) != '\0')) {
    memcpy(param_2,(void *)(param_1 + 0xbd),param_3);
    uVar1 = 1;
  }
  return uVar1;
}


