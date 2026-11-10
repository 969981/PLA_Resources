/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0ad5c; name: FUN_01f0ad5c
 */


uint FUN_01f0ad5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_28;
  
  local_28 = FUN_02b1f8b0(DAT_043ef5b0);
  uVar2 = FUN_02b21278(DAT_043ef5b0,&local_28);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_02b2256c(DAT_043ef5b0,&local_28,param_3,param_4);
  }
  return uVar1 & 1;
}


