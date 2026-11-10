/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee4e0c; name: FUN_02ee4e0c
 */


undefined8 FUN_02ee4e0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_28;
  char local_14 [4];
  
  local_28 = FUN_02eb1a90(param_1,param_2,local_14);
  uVar1 = 0;
  if ((local_28 != 0) && (local_14[0] != '\0')) {
    FUN_02ee4d70(param_1,&local_28);
    uVar1 = 1;
  }
  return uVar1;
}


