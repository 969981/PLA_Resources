/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010aac60; name: FUN_010aac60
 */


undefined8 FUN_010aac60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_18;
  
  local_18 = param_2;
  lVar1 = FUN_010b3bf8(param_1 + 0x4c98,&local_18);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x4cc8);
  }
  return *(undefined8 *)(lVar1 + 0x18);
}


